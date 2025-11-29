@class NSString, GPBInt32Array;

@interface AppointmentInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scheduledTimeText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) long long appointmentId;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (nonatomic) long long nextLiveStartTime;

+ (id)descriptor;

@end
