////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.50Release
// Tag = $Name: AKW1_500 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_EVENT_MESG_HPP)
#define FIT_EVENT_MESG_HPP

#include "fit_mesg.hpp"
#include "fit_mesg_with_event.hpp"

namespace fit
{

class EventMesg : public Mesg, public MesgWithEvent
{
   public:
      EventMesg(void) : Mesg(Profile::MESG_EVENT)
      {
      }

      EventMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns timestamp field
      // Units: s
      ///////////////////////////////////////////////////////////////////////
      FIT_DATE_TIME GetTimestamp(void) const
      {
         return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set timestamp field
      // Units: s
      ///////////////////////////////////////////////////////////////////////
      void SetTimestamp(FIT_DATE_TIME timestamp)
      {
         SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns event field
      ///////////////////////////////////////////////////////////////////////
      FIT_EVENT GetEvent(void) const
      {
         return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set event field
      ///////////////////////////////////////////////////////////////////////
      void SetEvent(FIT_EVENT event)
      {
         SetFieldENUMValue(0, event, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns event_type field
      ///////////////////////////////////////////////////////////////////////
      FIT_EVENT_TYPE GetEventType(void) const
      {
         return GetFieldENUMValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set event_type field
      ///////////////////////////////////////////////////////////////////////
      void SetEventType(FIT_EVENT_TYPE eventType)
      {
         SetFieldENUMValue(1, eventType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns data16 field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetData16(void) const
      {
         return GetFieldUINT16Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set data16 field
      ///////////////////////////////////////////////////////////////////////
      void SetData16(FIT_UINT16 data16)
      {
         SetFieldUINT16Value(2, data16, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns data field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetData(void) const
      {
         return GetFieldUINT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set data field
      ///////////////////////////////////////////////////////////////////////
      void SetData(FIT_UINT32 data)
      {
         SetFieldUINT32Value(3, data, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns timer_trigger field
      ///////////////////////////////////////////////////////////////////////
      FIT_TIMER_TRIGGER GetTimerTrigger(void) const
      {
         return GetFieldENUMValue(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_TIMER_TRIGGER);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set timer_trigger field
      ///////////////////////////////////////////////////////////////////////
      void SetTimerTrigger(FIT_TIMER_TRIGGER timerTrigger)
      {
         SetFieldENUMValue(3, timerTrigger, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_TIMER_TRIGGER);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns course_point_index field
      ///////////////////////////////////////////////////////////////////////
      FIT_MESSAGE_INDEX GetCoursePointIndex(void) const
      {
         return GetFieldUINT16Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_COURSE_POINT_INDEX);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set course_point_index field
      ///////////////////////////////////////////////////////////////////////
      void SetCoursePointIndex(FIT_MESSAGE_INDEX coursePointIndex)
      {
         SetFieldUINT16Value(3, coursePointIndex, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_COURSE_POINT_INDEX);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns battery_level field
      // Units: V
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetBatteryLevel(void) const
      {
         return GetFieldFLOAT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_BATTERY_LEVEL);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set battery_level field
      // Units: V
      ///////////////////////////////////////////////////////////////////////
      void SetBatteryLevel(FIT_FLOAT32 batteryLevel)
      {
         SetFieldFLOAT32Value(3, batteryLevel, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_BATTERY_LEVEL);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns virtual_partner_speed field
      // Units: m/s
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetVirtualPartnerSpeed(void) const
      {
         return GetFieldFLOAT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_VIRTUAL_PARTNER_SPEED);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set virtual_partner_speed field
      // Units: m/s
      ///////////////////////////////////////////////////////////////////////
      void SetVirtualPartnerSpeed(FIT_FLOAT32 virtualPartnerSpeed)
      {
         SetFieldFLOAT32Value(3, virtualPartnerSpeed, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_VIRTUAL_PARTNER_SPEED);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns hr_high_alert field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetHrHighAlert(void) const
      {
         return GetFieldUINT8Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_HR_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set hr_high_alert field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      void SetHrHighAlert(FIT_UINT8 hrHighAlert)
      {
         SetFieldUINT8Value(3, hrHighAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_HR_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns hr_low_alert field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetHrLowAlert(void) const
      {
         return GetFieldUINT8Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_HR_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set hr_low_alert field
      // Units: bpm
      ///////////////////////////////////////////////////////////////////////
      void SetHrLowAlert(FIT_UINT8 hrLowAlert)
      {
         SetFieldUINT8Value(3, hrLowAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_HR_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns speed_high_alert field
      // Units: m/s
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetSpeedHighAlert(void) const
      {
         return GetFieldFLOAT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_SPEED_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set speed_high_alert field
      // Units: m/s
      ///////////////////////////////////////////////////////////////////////
      void SetSpeedHighAlert(FIT_FLOAT32 speedHighAlert)
      {
         SetFieldFLOAT32Value(3, speedHighAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_SPEED_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns speed_low_alert field
      // Units: m/s
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetSpeedLowAlert(void) const
      {
         return GetFieldFLOAT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_SPEED_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set speed_low_alert field
      // Units: m/s
      ///////////////////////////////////////////////////////////////////////
      void SetSpeedLowAlert(FIT_FLOAT32 speedLowAlert)
      {
         SetFieldFLOAT32Value(3, speedLowAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_SPEED_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns cad_high_alert field
      // Units: rpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetCadHighAlert(void) const
      {
         return GetFieldUINT16Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_CAD_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set cad_high_alert field
      // Units: rpm
      ///////////////////////////////////////////////////////////////////////
      void SetCadHighAlert(FIT_UINT16 cadHighAlert)
      {
         SetFieldUINT16Value(3, cadHighAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_CAD_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns cad_low_alert field
      // Units: rpm
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetCadLowAlert(void) const
      {
         return GetFieldUINT16Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_CAD_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set cad_low_alert field
      // Units: rpm
      ///////////////////////////////////////////////////////////////////////
      void SetCadLowAlert(FIT_UINT16 cadLowAlert)
      {
         SetFieldUINT16Value(3, cadLowAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_CAD_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns power_high_alert field
      // Units: watts
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetPowerHighAlert(void) const
      {
         return GetFieldUINT16Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_POWER_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set power_high_alert field
      // Units: watts
      ///////////////////////////////////////////////////////////////////////
      void SetPowerHighAlert(FIT_UINT16 powerHighAlert)
      {
         SetFieldUINT16Value(3, powerHighAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_POWER_HIGH_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns power_low_alert field
      // Units: watts
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetPowerLowAlert(void) const
      {
         return GetFieldUINT16Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_POWER_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set power_low_alert field
      // Units: watts
      ///////////////////////////////////////////////////////////////////////
      void SetPowerLowAlert(FIT_UINT16 powerLowAlert)
      {
         SetFieldUINT16Value(3, powerLowAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_POWER_LOW_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns time_duration_alert field
      // Units: s
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetTimeDurationAlert(void) const
      {
         return GetFieldFLOAT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_TIME_DURATION_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set time_duration_alert field
      // Units: s
      ///////////////////////////////////////////////////////////////////////
      void SetTimeDurationAlert(FIT_FLOAT32 timeDurationAlert)
      {
         SetFieldFLOAT32Value(3, timeDurationAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_TIME_DURATION_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns distance_duration_alert field
      // Units: m
      ///////////////////////////////////////////////////////////////////////
      FIT_FLOAT32 GetDistanceDurationAlert(void) const
      {
         return GetFieldFLOAT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_DISTANCE_DURATION_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set distance_duration_alert field
      // Units: m
      ///////////////////////////////////////////////////////////////////////
      void SetDistanceDurationAlert(FIT_FLOAT32 distanceDurationAlert)
      {
         SetFieldFLOAT32Value(3, distanceDurationAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_DISTANCE_DURATION_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns calorie_duration_alert field
      // Units: calories
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetCalorieDurationAlert(void) const
      {
         return GetFieldUINT32Value(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_CALORIE_DURATION_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set calorie_duration_alert field
      // Units: calories
      ///////////////////////////////////////////////////////////////////////
      void SetCalorieDurationAlert(FIT_UINT32 calorieDurationAlert)
      {
         SetFieldUINT32Value(3, calorieDurationAlert, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_CALORIE_DURATION_ALERT);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns fitness_equipment_state field
      ///////////////////////////////////////////////////////////////////////
      FIT_FITNESS_EQUIPMENT_STATE GetFitnessEquipmentState(void) const
      {
         return GetFieldENUMValue(3, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_FITNESS_EQUIPMENT_STATE);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set fitness_equipment_state field
      ///////////////////////////////////////////////////////////////////////
      void SetFitnessEquipmentState(FIT_FITNESS_EQUIPMENT_STATE fitnessEquipmentState)
      {
         SetFieldENUMValue(3, fitnessEquipmentState, 0, (FIT_UINT16) Profile::EVENT_MESG_DATA_FIELD_FITNESS_EQUIPMENT_STATE);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns event_group field
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetEventGroup(void) const
      {
         return GetFieldUINT8Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set event_group field
      ///////////////////////////////////////////////////////////////////////
      void SetEventGroup(FIT_UINT8 eventGroup)
      {
         SetFieldUINT8Value(4, eventGroup, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns checksum field
      ///////////////////////////////////////////////////////////////////////
      FIT_CHECKSUM GetChecksum(void) const
      {
         return GetFieldUINT8Value(252, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set checksum field
      ///////////////////////////////////////////////////////////////////////
      void SetChecksum(FIT_CHECKSUM checksum)
      {
         SetFieldUINT8Value(252, checksum, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_EVENT_MESG_HPP)
