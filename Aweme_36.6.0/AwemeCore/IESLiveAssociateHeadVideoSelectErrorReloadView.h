@class IESLiveWebpLoadingView, IESLiveEmptyViewConfig, IESLiveEmptyView;

@interface IESLiveAssociateHeadVideoSelectErrorReloadView : UIView

@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *config;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ reloadBlock;

- (void)didClickReloadButton;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
