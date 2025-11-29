@class WCFinderAuthInfoIconView, RichTextView;

@interface WCFinderAggregatedTitleView : UIView

@property (weak, nonatomic) RichTextView *titleView;
@property (weak, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (weak, nonatomic) RichTextView *suffixTitleView;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

+ (double)getTitleWidthWithTitle:(id)a0 suffixTitle:(id)a1 font:(id)a2 width:(double)a3;
+ (double)getTitleWidthWithTitle:(id)a0 authInfo:(id)a1 font:(id)a2 width:(double)a3;
+ (BOOL)shouldShowSuffixTitleWithTitle:(id)a0 font:(id)a1 width:(double)a2;

- (id)init;
- (void)cleanTitle;
- (void)setUpUI;
- (void)setTitle:(id)a0 suffixTitle:(id)a1 authInfo:(id)a2 font:(id)a3 width:(double)a4 titleWidth:(double)a5 shouldShowSuffix:(BOOL)a6;
- (double)fullWidth;
- (void)setupAuthInfo:(id)a0;
- (void)setTextColor:(id)a0;
- (void)setTarget:(id)a0 selector:(SEL)a1;
- (void)tapGestureAction;
- (void).cxx_destruct;

@end
