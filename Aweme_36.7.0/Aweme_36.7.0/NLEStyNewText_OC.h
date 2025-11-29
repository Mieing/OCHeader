@class NSString, NSArray, NLEResourceNode_OC;

@interface NLEStyNewText_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEStyNewText> { struct NLEStyNewText *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) float boldValue;
@property (nonatomic) unsigned int italicDegree;
@property (nonatomic) int typeSettingKind;
@property (nonatomic) int typeSettingAlign;
@property (nonatomic) BOOL canvas;
@property (nonatomic) unsigned int canvasColor;
@property (nonatomic) BOOL canvasRoundCorner;
@property (nonatomic) float canvasRoundRadius;
@property (nonatomic) float canvasRoundRadiusScale;
@property (nonatomic) BOOL canvasCustomized;
@property (nonatomic) float canvasWidth;
@property (nonatomic) float canvasHeight;
@property (nonatomic) float canvasVerticalOffset;
@property (nonatomic) float canvasHorizontalOffset;
@property (nonatomic) float innerPadding;
@property (nonatomic) float lineMaxWidth;
@property (nonatomic) float lineSpacing;
@property (nonatomic) float letterSpacing;
@property (nonatomic) BOOL textAdaptiveCanvasEnabled;
@property (nonatomic) float textFixedWidth;
@property (nonatomic) float textFixedHeight;
@property (nonatomic) BOOL enableFixedLayout;
@property (nonatomic) BOOL wrappingEnabled;
@property (nonatomic) float autoFontSizeMin;
@property (nonatomic) float autoFontSizeMax;
@property (nonatomic) BOOL autoWrapByWord;
@property (nonatomic) unsigned int keyWordRandomOrder;
@property (nonatomic) BOOL keyWordsVisible;
@property (retain, nonatomic) NSArray *emphasisArray;
@property (retain, nonatomic) NSArray *keywordParamArray;
@property (retain, nonatomic) NSArray *highLightRichStyleArray;
@property (nonatomic) NSArray *fallbackFontList;
@property (nonatomic) unsigned int KTVColor;
@property (nonatomic) unsigned int KTVOutlineColor;
@property (nonatomic) unsigned int KTVShadowColor;
@property (nonatomic) NLEResourceNode_OC *shape;
@property (nonatomic) BOOL shapeFlipX;
@property (nonatomic) BOOL shapeFlipY;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEStyNewText> { struct NLEStyNewText *x0; struct __shared_weak_count *x1; })a0;
- (void)addFallbackFont:(id)a0;
- (void)removeFallbackFont:(id)a0;
- (void)clearFallbackFont;
- (void)addEmphasisParam:(id)a0;
- (void)removeEmphasisParam:(id)a0;
- (void)clearEmphasisParam;
- (void)setKeywordArray:(id)a0;
- (void)addKeywordParam:(id)a0;
- (void)removeKeywordParam:(id)a0;
- (void)clearKeywordParam;
- (void)addHighLightRichStyleArray:(id)a0;
- (void)removeHighLightRichStyleArray:(id)a0;
- (void)clearHighLightRichStyleArray;
- (void).cxx_destruct;
- (id)init;

@end
