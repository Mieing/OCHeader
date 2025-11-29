@class AWECloudAlbumDetailErrorView, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWECloudAlbumDetailLoadingView : UIView

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWECloudAlbumDetailErrorView *errorView;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)setLoading:(BOOL)a0;
- (void).cxx_destruct;
- (void)retryAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
