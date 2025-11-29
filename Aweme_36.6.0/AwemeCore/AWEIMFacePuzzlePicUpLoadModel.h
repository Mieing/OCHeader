@class NSString;

@interface AWEIMFacePuzzlePicUpLoadModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imageUri;
@property (copy, nonatomic) NSString *imageSkey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long senseExercisePicEnum;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *decryptImageUrl;
@property (copy, nonatomic) NSString *mainImageSkey;
@property (nonatomic) long long featureEnum;

+ (id)sha256hmac:(id)a0 content:(id)a1;
+ (id)convertFromEncryptImageUploadResult:(id)a0 withEnumInfo:(id)a1;
+ (long long)convertPicEnumFromDescString:(id)a0;
+ (long long)convertFeatureEnumFromFeatureString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
