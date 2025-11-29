@class UILabel, AFDTextBubbleContentConfig, MASConstraint;

@interface AFDTextBubbleContentView : AFDReusableBubbleContentView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MASConstraint *labelSizeConstraint;
@property (retain, nonatomic) AFDTextBubbleContentConfig *config;

+ (id)getAttributedStringWithText:(id)a0 config:(id)a1;
+ (BOOL)isReachedMaxCountWithString:(id)a0 config:(id)a1;
+ (struct CGSize { double x0; double x1; })viewSizeWithAttributedString:(id)a0 config:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)onAWEUIThemeChangeNotification;
- (void)updateUIWithConfig:(id)a0;
- (void)updateWithTextString:(id)a0 config:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithAttributedString:(id)a0;
- (void)setupUI;

@end
