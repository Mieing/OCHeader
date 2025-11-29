@class NSString;

@interface HTSLiveBuffLockInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL locked;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cellText;
@property (nonatomic) BOOL customButtonColor;

+ (id)descriptor;

@end
