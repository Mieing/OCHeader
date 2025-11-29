@class NSString, AWEBarFontModel;

@interface AWEBarTextModel : AWEBarViewBaseModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWEBarFontModel *font;
@property (nonatomic) BOOL shouldTruncate;
@property (nonatomic) long long ellipsisType;

+ (id)fontJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
