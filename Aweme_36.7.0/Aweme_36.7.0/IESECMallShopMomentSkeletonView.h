@class UIView;
@protocol IESECUILoadingViewProtocol;

@interface IESECMallShopMomentSkeletonView : UIView

@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *loadingView;

- (void)dismissLoading;
- (void)setupUIWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void)showLoading;

@end
