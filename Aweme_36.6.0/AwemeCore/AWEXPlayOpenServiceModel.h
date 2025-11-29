@class NSString;

@interface AWEXPlayOpenServiceModel : NSObject <NSCopying>

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *realNameAgreementText;
@property (copy, nonatomic) NSString *realNameAgreementUrl;
@property (nonatomic) unsigned long long source;

- (BOOL)checkModelParams;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
