@class NSString, NSMutableDictionary, NSDictionary, AWEGDAlbumScrollView, AWEGDAlbumDataProcessor, NSMutableArray, AWEGoodsDetailPageContext;

@interface AWEGDAlbumPageView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) NSDictionary *logParams;
@property (retain, nonatomic) NSMutableArray *pageIndexs;
@property (retain, nonatomic) AWEGDAlbumScrollView *scrollView;
@property (retain, nonatomic) NSMutableDictionary *albums;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) AWEGDAlbumDataProcessor *dataProcessor;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) id /* block */ onSelectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndScroll:(id)a0;
- (void)enableScroll;
- (void)appendAlbumItemWithCategoryInfo:(id)a0;
- (long long)currentPageIndex:(id)a0;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)trackShowPOIPicOperationWithPageIndex:(long long)a0;
- (void)loadDataWithModel:(id)a0 extraParam:(id)a1 dataProcessor:(id)a2;
- (void)prohibitScroll;
- (void)reloadCurrentAlbum;
- (void)anchorFistAlbumToIndex:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;

@end
