@class NSString;

@interface LiveMountMicroAppLimitData : IESLivePBBaseMessage

@property (nonatomic) BOOL nextMountLimit;
@property (nonatomic) long long nextMountTime;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
