@class NSString;

@interface AWESearchEpidemicBannerModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) NSString *backgroundColorString;
@property (retain, nonatomic) NSString *schemaURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
