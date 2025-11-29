@class NSString, NSArray;

@interface AWEDoubleColumnSearchMerchandiseFilterRenderInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL enableScroll;
@property (nonatomic) BOOL enableCeiling;
@property (nonatomic) BOOL enableCenterAlignment;
@property (nonatomic) BOOL enableShow;
@property (nonatomic) double height;
@property (nonatomic) double topPadding;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double itemGap;
@property (nonatomic) long long fontSize;
@property (nonatomic) double innerWidthMargin;
@property (nonatomic) double miniSpace;
@property (retain, nonatomic) NSString *widthStrategy;
@property (copy, nonatomic) NSArray *render;
@property (nonatomic) BOOL withoutQuickFilter;
@property (nonatomic) long long itemRow;

+ (id)renderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)a0;

- (void)clearDisplayFlag;
- (void).cxx_destruct;

@end
