@class WCAdModeSelectView;

@interface WCAdFeedbackPersonalizedPanel : MMUIView

@property (retain, nonatomic) WCAdModeSelectView *personalizedModeView;
@property (retain, nonatomic) WCAdModeSelectView *randomModeView;
@property (nonatomic) long long selectedMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)adjustUI;
- (void)onModeViewSelected:(id)a0;
- (void).cxx_destruct;

@end
