@class UIView, IESLiveEmptyViewConfig, IESLiveNavigationBar, IESLiveEmptyView, IESLiveWebpLoadingView;

@interface IESLiveInteractivePanelView : UIView

@property (retain, nonatomic) IESLiveEmptyView *emptyView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingIndicator;
@property (retain, nonatomic) IESLiveNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLiveEmptyViewConfig *emptyConfig;

- (void)startLoading:(id)a0;
- (void)hideEmptyView;
- (void)setupBaseViews;
- (void)showEmptyViewWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;

@end
