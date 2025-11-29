@class NSString, WCFinderNormalProgressBarConfig, UIView, MMUIButton, UIPanGestureRecognizer;

@interface WCFinderNormalProgressBar : WCFinderProgressBar <UIGestureRecognizerDelegate> {
    BOOL _showAnchorPoint;
    BOOL _showLargeBar;
}

@property (retain, nonatomic) WCFinderNormalProgressBarConfig *config;
@property (retain, nonatomic) MMUIButton *dotBtn;
@property (retain, nonatomic) UIView *leftBarView;
@property (retain, nonatomic) UIView *rightBarView;
@property (retain, nonatomic) UIView *midBarView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finderNormalProgressBarWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (double)progressBarVisibleHeight;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)setupWithConfig:(id)a0;
- (void)onPanProgressIcon:(id)a0;
- (void)layoutSubviews;
- (void)reset;
- (id)getConfig;
- (void)setShowLargeBar:(BOOL)a0;
- (void)setShowAnchorPoint:(BOOL)a0;
- (void)layoutHighlightAnchorPointView:(id)a0;
- (BOOL)isShowAnchorPoint;
- (BOOL)isShowLargeBar;
- (void).cxx_destruct;

@end
