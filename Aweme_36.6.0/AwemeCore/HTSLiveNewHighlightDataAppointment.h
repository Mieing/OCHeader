@class NSString, GPBInt32Array;

@interface HTSLiveNewHighlightDataAppointment : IESLivePBBaseMessage

@property (nonatomic) long long appointmentTimestamp;
@property (nonatomic) BOOL demotion;
@property (copy, nonatomic) NSString *anchorUid;
@property (nonatomic) long long currentNumber;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long appointmentId;
@property (nonatomic) int scheduledTime;
@property (nonatomic) int scheduledDate;
@property (retain, nonatomic) GPBInt32Array *scheduledWeekdaysArray;
@property (readonly, nonatomic) unsigned long long scheduledWeekdaysArray_Count;
@property (nonatomic) int showDuration;
@property (copy, nonatomic) NSString *dateText;
@property (copy, nonatomic) NSString *timeText;
@property (nonatomic) BOOL hasRedPacket;

+ (id)descriptor;

@end
