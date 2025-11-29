@class NSString, NSArray;

@interface OVCTextLayerMetadata : NSObject

@property (readonly, nonatomic) int layerID;
@property (readonly, nonatomic) NSString *textTemplate;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *textBlockMetadatas;
@property (readonly, nonatomic) NSString *contentLocaleID;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) float fontSize;
@property (readonly, nonatomic) struct CGVector { double dx; double dy; } shearDegrees;
@property (readonly, nonatomic) NSString *textFill;
@property (readonly, nonatomic) NSString *textStrokeFill;
@property (readonly, nonatomic) float textStrokeWidth;
@property (readonly, nonatomic) NSString *textShadowFill;
@property (readonly, nonatomic) struct CGVector { double dx; double dy; } textShadowOffset;
@property (readonly, nonatomic) float textShadowBlurRadius;
@property (readonly, nonatomic) unsigned long long textParagraphType;
@property (readonly, nonatomic) unsigned long long textAlignment;
@property (readonly, nonatomic) float characterSpacing;
@property (readonly, nonatomic) float characterWidthMultiple;
@property (readonly, nonatomic) NSString *backgroundFill;
@property (readonly, nonatomic) float backgroundCornerRadius;
@property (readonly, nonatomic) NSString *backgroundStrokeColor;
@property (readonly, nonatomic) float backgroundStrokeWidth;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundEdgeInsets;

- (id)initWithLayerID:(int)a0 textTemplate:(id)a1 text:(id)a2 textBlockMetadatas:(id)a3 contentLocaleID:(id)a4 fontName:(id)a5 fontSize:(float)a6 shearDegrees:(struct CGVector { double x0; double x1; })a7 textFill:(id)a8 textStrokeFill:(id)a9 textStrokeWidth:(float)a10 textShadowFill:(id)a11 textShadowOffset:(struct CGVector { double x0; double x1; })a12 textShadowBlurRadius:(float)a13 textParagraphType:(unsigned long long)a14 textAlignment:(unsigned long long)a15 characterSpacing:(float)a16 characterWidthMultiple:(float)a17 backgroundFill:(id)a18 backgroundCornerRadius:(float)a19 backgroundStrokeColor:(id)a20 backgroundStrokeWidth:(float)a21 backgroundEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a22;
- (void).cxx_destruct;

@end
