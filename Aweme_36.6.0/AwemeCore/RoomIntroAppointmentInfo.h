@class NSString, GPBInt32Array;

@interface RoomIntroAppointmentInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL subscribed;
@property (nonatomic) BOOL hasQueryStatus;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *appointmentId;
@property (copy, nonatomic) NSString *scheduledTimeText;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (nonatomic) long long nextLiveStartTime;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (copy, nonatomic) NSString *content;

+ (id)descriptor;

@end
