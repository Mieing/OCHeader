@class NSString, NSArray;

@interface AWEGeneralFilmTVInfoTextModuleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *line1;
@property (copy, nonatomic) NSString *line2;
@property (copy, nonatomic) NSString *line3;
@property (retain, nonatomic) NSArray *lineTextArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
