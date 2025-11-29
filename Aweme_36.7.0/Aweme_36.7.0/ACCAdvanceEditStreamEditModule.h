@class UIView;
@protocol ACCLoadingViewProtocol, ACCAEViewContainerProtocol, ACCAdvanceEditViewModelProtocol;

@interface ACCAdvanceEditStreamEditModule : DVEFeatureModule

@property (nonatomic, getter=isViewHasAppeared) BOOL viewHasAppeared;
@property (nonatomic) BOOL hasKVOController;
@property (retain, nonatomic) UIView *streamEditLoadingViewContainer;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *streamEditLoadingView;
@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> nleEditViewModel;

- (id)mediaSmallMediaContainer;
- (void)directlyCloseView;
- (void)handleStreamEditScene;
- (void)showStreamEditLoading;
- (void)observeDownloader;
- (void)handleDownloadVideoFailedCase;
- (void)handleDownloadVideoSucceedCase;
- (void)dismissStreamEditLoading;
- (void)moduleDidUnmount;
- (void)moduleWillAppear;
- (void).cxx_destruct;

@end
