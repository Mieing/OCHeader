@class AWEUILoadingView, DUXVacantView;

@interface AWELandscapeDetailLoadingCell : UICollectionViewCell

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXVacantView *errorView;

- (void)dismissLoadingView;
- (void)showErrorPage;
- (void)dismissErrorPage;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
