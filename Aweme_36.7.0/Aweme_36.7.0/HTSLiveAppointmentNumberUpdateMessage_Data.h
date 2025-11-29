@class NSString;

@interface HTSLiveAppointmentNumberUpdateMessage_Data : IESLivePBBaseMessage

@property (nonatomic) long long currentNumber;
@property (nonatomic) long long anchorUid;
@property (copy, nonatomic) NSString *anchorOpenId;

+ (id)descriptor;

@end
