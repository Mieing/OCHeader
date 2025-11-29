@class NSString;

@interface AWEGeneralSearchVideoDeepQAUIConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *backgroundImg;
@property (copy, nonatomic) NSString *keywordHighlightColorStart;
@property (copy, nonatomic) NSString *keywordHighlightColorEnd;
@property (copy, nonatomic) NSString *markPointImg;
@property (copy, nonatomic) NSString *titleTextColor;
@property (copy, nonatomic) NSString *titleBackgroundColor;
@property (copy, nonatomic) NSString *titleLabelIcon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
