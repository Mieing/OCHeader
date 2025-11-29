@class NSString;

@interface StreamControlData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *controlParams;

+ (id)descriptor;

@end
