@class NSString, NSDictionary;

@interface AWEPOIShareModel : AWEShareModel

@property (copy, nonatomic) NSString *lifeShareStr;
@property (nonatomic) BOOL enableQrCodeShareLynx;
@property (copy, nonatomic) NSDictionary *qrCodeShareInfo;
@property (copy, nonatomic) NSDictionary *clientShareInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)lifeShareExt;
- (id)qrCodeTemplateUrl;
- (void).cxx_destruct;

@end
