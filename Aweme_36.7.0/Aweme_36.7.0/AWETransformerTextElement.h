@class UIFont, NSString, AWETransformerColor, UILabel, AWEGradientView;

@interface AWETransformerTextElement : AWETransformerSingleElement

@property (retain, nonatomic) AWETransformerColor *textTransformerColor;
@property (retain, nonatomic) AWEGradientView *textGradientView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorString;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long fontWeight;
@property (nonatomic) unsigned long long textAlignment;
@property (nonatomic) unsigned long long textDecorationStyle;
@property (nonatomic) unsigned long long textDecorationLine;
@property (copy, nonatomic) NSString *textDecorationColorString;
@property (nonatomic) unsigned long long textOverflow;
@property (nonatomic) unsigned long long whiteSpace;
@property (nonatomic) unsigned long long textLineClamp;

+ (id)elementType;

- (double)intrinsicContentWidth;
- (double)originWidth;
- (double)originHeight;
- (void)elementDidLayout;
- (void)loadViewWithCache:(id)a0 delegate:(id)a1;
- (void)renderElement;
- (void)updateWithNewElement:(id)a0;
- (void)__loadTextLabel;
- (void)__updateTextElement;
- (void).cxx_destruct;
- (long long)alignment;
- (void)loadView;
- (double)intrinsicContentHeight;

@end
