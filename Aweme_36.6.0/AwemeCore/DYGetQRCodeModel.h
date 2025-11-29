@class NSString;

@interface DYGetQRCodeModel : DYAPassportResponseModel

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *descUrl;
@property (copy, nonatomic) NSString *qrcode;
@property (copy, nonatomic) NSString *qrcodeIndexUrl;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *webName;
@property (nonatomic) long long expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void)parseQRCodeImageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
