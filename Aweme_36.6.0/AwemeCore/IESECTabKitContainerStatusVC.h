@class IESECTabKitErrorView, IESECFullLoadingView;

@interface IESECTabKitContainerStatusVC : UIViewController {
    IESECFullLoadingView *_fullLoadingView;
}

@property (retain, nonatomic) IESECTabKitErrorView *errorView;
@property (copy, nonatomic) id /* block */ errorViewRefreshBlock;

- (void)showLoadingStatus;
- (void)showErrorStatus;
- (void)dismissStatus;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
