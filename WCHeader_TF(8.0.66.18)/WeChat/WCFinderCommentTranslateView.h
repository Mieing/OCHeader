@class UILabel, WCFinderAnimationLoadingView, WCFinderFeedContentTextView;

@interface WCFinderCommentTranslateView : UIView

@property (weak, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (weak, nonatomic) WCFinderFeedContentTextView *translateView;
@property (nonatomic) unsigned long long translateType;

+ (double)translateViewHeightWithContent:(id)a0 type:(unsigned long long)a1 maxWidth:(double)a2;
+ (double)translateViewHeightWithComment:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTranslateComment:(id)a0;
- (void)updateTranslateStyle:(unsigned long long)a0 content:(id)a1 source:(id)a2;
- (void)layoutUI;
- (void).cxx_destruct;

@end
