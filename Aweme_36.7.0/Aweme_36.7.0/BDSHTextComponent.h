@class UIColor, NSString, UIImage, BDSHTextView;

@interface BDSHTextComponent : BDSHViewComponent

@property (retain, nonatomic) BDSHTextView *labelView;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double lineHeight;
@property (nonatomic) long long alignment;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (nonatomic) double textInterval;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long maxLines;
@property (nonatomic) BOOL enableAdTag;
@property (retain, nonatomic) UIImage *adLabelImage;

+ (double)getFontWeight:(double)a0;
+ (long long)getTextAlign:(int)a0;

- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void)updateRenderData;
- (void)setBackgroundGradientWithColors:(id)a0 locations:(const double *)a1 angle:(unsigned char)a2;
- (void)setupText;
- (void).cxx_destruct;
- (id)contentView;

@end
