@class NSString, GPBInt32Array;

@interface IESLiveBroadcastConfig : IESLivePBBaseMessage

@property (nonatomic) int scheduledMasterSwitch;
@property (nonatomic) int scheduledProfileSwitch;
@property (copy, nonatomic) NSString *scheduledTime;
@property (nonatomic) int scheduledDays;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (nonatomic) int scheduledNoticeSwitchDisplay;
@property (nonatomic) int scheduledNoticeSwitch;
@property (nonatomic) BOOL subscribeStatus;
@property (nonatomic) long long appointmentId;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekDaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekDaysArray_Count;
@property (nonatomic) long long nextScheduledTime;
@property (nonatomic) int scheduledWeekTime;

+ (id)descriptor;

@end
