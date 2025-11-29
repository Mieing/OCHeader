@class UIViewController;
@protocol IESIMCustomCenterPopPresentViewDelegate;

@interface IESIMCustomCenterPopPresentView : UIView

@property (weak, nonatomic) UIViewController *presentedController;
@property (weak, nonatomic) id<IESIMCustomCenterPopPresentViewDelegate> delegate;

- (id)initWithPresentedController:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
