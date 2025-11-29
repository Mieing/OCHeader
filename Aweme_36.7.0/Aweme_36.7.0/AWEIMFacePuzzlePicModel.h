@class NSString, UIImage;

@interface AWEIMFacePuzzlePicModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imageUri;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *imageSkey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long senseExercisePicEnum;
@property (copy, nonatomic) NSString *decryptImageUrl;
@property (retain, nonatomic) UIImage *image;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
