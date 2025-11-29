@class NSString;

@interface CJPayPassKitBizRequestModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *sessionKey;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *mobile;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
