@class NSArray;

@interface AWEMusicMediaModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *imageSet;

+ (id)imageSetJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
