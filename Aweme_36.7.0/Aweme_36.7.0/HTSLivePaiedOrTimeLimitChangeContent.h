@class NSString;

@interface HTSLivePaiedOrTimeLimitChangeContent : IESLivePBBaseMessage

@property (nonatomic) BOOL needLeave;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
