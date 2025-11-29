@class _TtC18IESLiveRevenueImpl27IESLiveWalletContainerModel, NSDictionary, _TtC19IESLiveServiceSwift22IESLiveDCContainerView, UIView, IESLiveWalletNavigationBar;

@interface IESLiveRevenueImpl.IESLiveWalletMyCoinViewSwiftController : UIViewController {
    void /* function */ trackInfo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
}

@property (nonatomic, retain) _TtC19IESLiveServiceSwift22IESLiveDCContainerView *containerView;
@property (nonatomic, retain) _TtC18IESLiveRevenueImpl27IESLiveWalletContainerModel *viewModel;
@property (nonatomic, copy) NSDictionary *trackInfo;
@property (nonatomic, retain) UIView *emptyView;
@property (nonatomic, retain) IESLiveWalletNavigationBar *navigationBar;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (id)initWithTrackInfo:(id)a0;
- (void)tapDefaultEmptyView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
