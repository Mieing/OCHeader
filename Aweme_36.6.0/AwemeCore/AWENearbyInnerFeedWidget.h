@class NSString, UIView;

@interface AWENearbyInnerFeedWidget : UIView

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) UIView *lynxView;

- (void)showOnView:(id)a0;
- (void)hideView;
- (double)maxCenterYRight;
- (double)minCenterYRight;
- (double)maxCenterYLeft;
- (double)minCenterYLeft;
- (void)updatePosionWithTagertPosition:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithSchema:(id)a0;

@end
