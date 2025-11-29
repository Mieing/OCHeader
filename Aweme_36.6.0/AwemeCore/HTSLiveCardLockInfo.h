@class NSString;

@interface HTSLiveCardLockInfo : IESLivePBBaseMessage

@property (nonatomic) int lockStatus;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cellText;
@property (nonatomic) BOOL customButtonColor;

+ (id)descriptor;

@end
