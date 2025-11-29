@class NSString;

@interface AWEGeneralFilmTelevisionTagModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tagWord;
@property (copy, nonatomic) NSString *tagWordColorString;
@property (copy, nonatomic) NSString *tagBgImageURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tagWordColor;
- (void).cxx_destruct;

@end
