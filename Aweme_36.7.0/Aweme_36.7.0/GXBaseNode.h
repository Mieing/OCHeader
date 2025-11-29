@class UIColor, NSString;

@interface GXBaseNode : GXNode {
    UIColor *_currentBgColor;
}

@property (nonatomic) double topLeftRadius;
@property (nonatomic) double topRightRadius;
@property (nonatomic) double bottomLeftRadius;
@property (nonatomic) double bottomRightRadius;
@property (nonatomic) double opacity;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL clipsToBounds;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL isSupportGradientBgColor;
@property (retain, nonatomic) NSString *linearGradient;
@property (nonatomic) BOOL isSupportShadow;
@property (retain, nonatomic) NSString *boxShadow;
@property (retain, nonatomic) NSString *backdropFilter;

- (void)setupNormalBackground:(id)a0;
- (void)setupGradientBackground:(id)a0;
- (void)setupCornerRadius:(id)a0;
- (void)configureStyleInfo:(id)a0;
- (void)updateNormalStyle:(id)a0 isMark:(BOOL)a1;
- (BOOL)updateLayoutStyle:(id)a0;
- (void)setupAccessibilityInfo:(id)a0;
- (void)setupShadow:(id)a0;
- (void)setupBlur:(id)a0;
- (void).cxx_destruct;

@end
