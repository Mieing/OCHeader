@class NSString;

@interface AWEIMCodeGenPicModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *imageSkey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long senseExercisePicEnum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
