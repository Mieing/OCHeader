@class NSString;

@interface ScreenRecordRunInfo : IESLivePBBaseMessage

@property (nonatomic) long long recordDuration;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
