@class NSString;

@interface TextStatePublishBrandInfo : NSObject

@property (retain, nonatomic) NSString *base64BrandKeyInfo;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned long long brandId;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *qrCodeId;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) unsigned int createTime;

- (id)initWithBase64BrandKeyInfo:(id)a0;
- (void).cxx_destruct;

@end
