@class NSString, AWEURLModel;

@interface AWELiveFeedLabelSpliceModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) AWEURLModel *backgroundImage;
@property (retain, nonatomic) AWEURLModel *iconImage;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long iconWidth;
@property (nonatomic) long long iconHeight;
@property (nonatomic) long long iconRaduis;
@property (nonatomic) long long textFrontSize;
@property (nonatomic) long long textFrontBold;
@property (nonatomic) long long textFrontItalic;

+ (id)labelBackgroundImageJSONTransformer;
+ (id)labelIconImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
