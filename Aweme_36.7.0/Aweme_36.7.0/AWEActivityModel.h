@class NSString, AWESearchAladdinButtonStyle, AWEURLModel;

@interface AWEActivityModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *linkText;
@property (retain, nonatomic) NSString *linkSubText;
@property (retain, nonatomic) NSString *arrowText;
@property (retain, nonatomic) AWEURLModel *linkIcon;
@property (retain, nonatomic) NSString *linkSchema;
@property (retain, nonatomic) AWEURLModel *bannerInfo;
@property (retain, nonatomic) AWESearchAladdinButtonStyle *buttonStyle;

+ (id)bannerInfoJSONTransformer;
+ (id)linkIconJSONTransformer;
+ (id)buttonStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
