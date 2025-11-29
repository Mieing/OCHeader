@class NSString;

@interface PushResInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL ok;
@property (copy, nonatomic) NSString *message;

+ (id)descriptor;

@end
