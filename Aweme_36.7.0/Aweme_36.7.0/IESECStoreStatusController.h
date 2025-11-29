@class IESECShopErrorView, NSString, UIImageView, IESECServiceProxy, UIView, IESECShopPreviewMaskView;
@protocol IESECShopDataService, IESECUILoadingViewProtocol;

@interface IESECStoreStatusController : IESECRelationController <IESECStoreStatusControllerProtocol>

@property (retain, nonatomic) IESECShopPreviewMaskView *previewMaskView;
@property (retain, nonatomic) IESECShopErrorView *errorView;
@property (retain, nonatomic) UIImageView *fullSkeletonView;
@property (retain, nonatomic) UIImageView *tabSkeletonView;
@property (retain, nonatomic) UIImageView *bottomTabSkeletonView;
@property (retain, nonatomic) UIView<IESECUILoadingViewProtocol> *fullLoadingView;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (copy, nonatomic) id /* block */ errorViewRefreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindingV2;
- (void)controllerDidLoad;
- (void)apiStatusDidChange:(unsigned long long)a0;
- (void)p_setupPreviewModeIfNeeded;
- (void)hideTabSkeletonView;
- (void)p_showFullErrorPage;
- (void)p_showTabErrorPage;
- (void)p_hideErrorPage;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
