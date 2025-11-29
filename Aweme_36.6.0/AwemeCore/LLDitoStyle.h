@class UIColor, NSString, NSDictionary, LLDitoStyleGradient, LLDitoStyleBorder, LLDitoStyleIsChildViewStick;
@protocol LLDitoCustomParserProtocol;

@interface LLDitoStyle : NSObject

@property (copy, nonatomic) NSDictionary *sourceData;
@property (retain, nonatomic) UIColor *d_backgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } d_margin;
@property (nonatomic) struct DitoStyleCornerRadius { double topLeft; double bottomLeft; double bottomRight; double topRight; } d_radius;
@property (nonatomic) unsigned long long floatGravity;
@property (copy, nonatomic) UIColor *inheritBackgroundColor;
@property (nonatomic) BOOL isSticky;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) UIColor *nodeBackgroundColor;
@property (weak, nonatomic) id<LLDitoCustomParserProtocol> customParserImpl;
@property (retain, nonatomic) LLDitoStyleGradient *linearGradient;
@property (retain, nonatomic) LLDitoStyleBorder *border;
@property (copy, nonatomic) NSString *presetHeight;
@property (nonatomic) BOOL isComponentStick;
@property (retain, nonatomic) LLDitoStyleIsChildViewStick *isChildViewStick;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } margin;
@property (readonly, nonatomic) struct DitoStyleCornerRadius { double x0; double x1; double x2; double x3; } radius;
@property (nonatomic) double topMarginWithEventThrough;
@property (nonatomic) BOOL overParentView;

- (id)initWithData:(id)a0 customParserImpl:(id)a1;
- (void)mergeDataFromSuperNodeStyle:(id)a0;
- (void)parseSourceData;
- (void)parseBackgroundColor;
- (void)parseMargin;
- (void)parseRadius;
- (void)parseFloatGravity;
- (void)parseSticky;
- (void)parseDecorationStyle;
- (void)parseNodeLayer;
- (void)parsePresetHeight;
- (id)phaseColor:(id)a0;
- (void)parseDecorationBackgrondColor;
- (void)parseDecorationImage;
- (void)parseGradient;
- (void)parseBorder;
- (id)dito_separatedString:(id)a0 byString:(id)a1;
- (void).cxx_destruct;

@end
