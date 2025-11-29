@class NSString;

@interface IESIMCodeGenTagImageModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *imageUrlLight;
@property (copy, nonatomic) NSString *imageUrlDark;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
