@class NSString;

@interface AppointmentIMShareData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *msgContent;

+ (id)descriptor;

@end
