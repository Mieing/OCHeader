@class UIView;
@protocol AWEIMTableViewHeaderFooterViewDelegate;

@interface AWEIMTableViewHeaderFooterView : UIView

@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *selectedBackgroundView;
@property (nonatomic) BOOL isSelected;
@property (weak, nonatomic) id<AWEIMTableViewHeaderFooterViewDelegate> delegate;

- (void)hideSelectedBackgroundView;
- (void)delayHiddingSelectedBackgroundView;
- (void).cxx_destruct;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setup;
- (void)setContainerView:(id)a0;

@end
