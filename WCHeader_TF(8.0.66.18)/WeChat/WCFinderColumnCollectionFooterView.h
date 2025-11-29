@class WCFinderAnimationLoadingView;
@protocol WCFinderColumnCollectionFooterViewDelegate;

@interface WCFinderColumnCollectionFooterView : UICollectionReusableView

@property (weak, nonatomic) id<WCFinderColumnCollectionFooterViewDelegate> delegate;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) unsigned long long state;

+ (id)footerViewID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubView;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData;
- (void)onStateOfError:(id)a0;
- (void)refreshCollectionViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
