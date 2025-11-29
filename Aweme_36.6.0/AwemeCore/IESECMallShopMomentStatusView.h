@class IESECMallShopMomentSkeletonView, IESECMallShopMomentErrorView, IESECMallShopMomentContext;

@interface IESECMallShopMomentStatusView : UIView

@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (retain, nonatomic) IESECMallShopMomentErrorView *errorView;
@property (retain, nonatomic) IESECMallShopMomentSkeletonView *skeletonView;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)showError;
- (void)showLoading;

@end
