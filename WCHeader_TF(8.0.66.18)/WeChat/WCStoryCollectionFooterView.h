@class NSString, WCStoryRefreshFooterView;
@protocol WCStoryCollectionFooterViewDelegate;

@interface WCStoryCollectionFooterView : UICollectionReusableView <MMRefreshTableFooterDelegate>

@property (retain, nonatomic) WCStoryRefreshFooterView *footerView;
@property (weak, nonatomic) id<WCStoryCollectionFooterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshCollectionViewDidScroll:(id)a0;
- (void)refreshCollectionViewDataSourceDidFinishedLoading:(id)a0;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
