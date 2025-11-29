@class NSString;

@interface AWEIMCodeGenPhotoInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *mediumUrl;
@property (copy, nonatomic) NSString *largeUrl;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) BOOL useOriginImage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
