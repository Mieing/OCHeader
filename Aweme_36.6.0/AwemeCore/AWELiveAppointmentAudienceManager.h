@class NSString;

@interface AWELiveAppointmentAudienceManager : NSObject <AWELiveAppointmentProtocol, IESLiveCalendarAudienceService>

@property (copy, nonatomic) NSString *enterFromType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)saveToCalenderWithAppointmentTime:(double)a0 appointmentID:(id)a1 anchorInfo:(id)a2 weekDaysArray:(id)a3 extraParams:(id)a4;
- (void)cancelCalenderWithAppointmentID:(id)a0 anchorInfo:(id)a1;
- (void)saveCalenderIfNeedWithAppointmentStatus:(BOOL)a0 appointmentInfo:(id)a1 completion:(id /* block */)a2;
- (void)saveToCalenderWithAppointmentTime:(double)a0 appointmentID:(id)a1 anchorID:(id)a2 anchorSecID:(id)a3 anchorName:(id)a4 weekDaysArray:(id)a5 extraParams:(id)a6;
- (void)cancelCalenderWithAppointmentID:(id)a0 anchorID:(id)a1 anchorSecID:(id)a2;
- (double)getAppointmentStartTimeWithStartDate:(long long)a0 startTime:(long long)a1 weekDaysArray:(id)a2;
- (BOOL)enableShowAppointmentToast;
- (id)formatTime:(long long)a0;
- (BOOL)enableSaveToCalender;
- (BOOL)enableShowCalendarAlert;
- (void)trackerSaveToCalendarAlertShow:(id)a0 appointmentID:(id)a1 isCycle:(BOOL)a2;
- (void)showCalendarAlertWithAppointmentTime:(double)a0 appointmentID:(id)a1 anchorID:(id)a2 anchorSecID:(id)a3 anchorName:(id)a4 weekDaysArray:(id)a5 isCycle:(BOOL)a6 extraParams:(id)a7;
- (void)handleCalenderWithAppointmentTime:(double)a0 appointmentID:(id)a1 anchorID:(id)a2 anchorSecID:(id)a3 anchorName:(id)a4 weekDaysArray:(id)a5 extraParams:(id)a6;
- (void)trackerSaveToCalendarAlertClick:(id)a0 appointmentID:(id)a1 isCycle:(BOOL)a2 buttonType:(id)a3;
- (id)generateCalendarURLWithAnchorID:(id)a0;
- (void)trackerSaveToCalendarSuccess:(id)a0 appointmentID:(id)a1 isCycle:(BOOL)a2;
- (void)saveAppointmentInfoToCalender:(double)a0 appointmentID:(id)a1 authorInfo:(id)a2 weekDaysArray:(id)a3 extraParams:(id)a4;
- (void)cancelAppointmentInfoInCalender:(id)a0 authorInfo:(id)a1;
- (void).cxx_destruct;
- (id)formatDate:(long long)a0;

@end
