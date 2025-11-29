@class NSNumber, NSString, AWEURLModel;

@interface AWENewScanImpl.QRCodeModel : AWEBaseApiModel {
    void /* function */ eventExtra;
}

@property (nonatomic, retain) AWEURLModel *qrcodeURL;
@property (nonatomic, retain) NSNumber *qrCodeType;
@property (nonatomic, retain) AWEURLModel *avatarURL;
@property (nonatomic) long long expireTimeInSecond;
@property (nonatomic, copy) NSString *eventExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (id)qrcodeURLJSONTransformer;
- (id)avatarURLJSONTransformer;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
