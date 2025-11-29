@class NSString, UICollectionView, IESLLGoodsDetailPageContext, LLBizDitoViewController, IESLLPOIGoodsDetailPingbackFilter, NSArray;

@interface IESLLPOIGoodsDetailNestedScrollManager : NSObject

@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (weak, nonatomic) LLBizDitoViewController *vc;
@property (weak, nonatomic) UICollectionView *lynxListView;
@property (nonatomic) BOOL outScrollEnable;
@property (nonatomic) BOOL inScrollEnable;
@property (copy, nonatomic) NSString *nestedScrollNodeTag;
@property (retain, nonatomic) IESLLPOIGoodsDetailPingbackFilter *pingbackFilter;
@property (nonatomic) long long nestedScrollCardTopOffset;
@property (retain, nonatomic) NSArray *exposeConfig;

- (void)outPageDidScroll:(id)a0;
- (void)updateExposeConfig:(id)a0;
- (void)unlockScroll;
- (id)initWithContext:(id)a0 vc:(id)a1;
- (id)lynxContainerViewWithNodeTag:(id)a0;
- (void)initParam;
- (void)loadNotification;
- (void)poiGoodsDetailStartNestedScroll:(id)a0;
- (void)bfsSearchLynxListViewWithNodeTag:(id)a0;
- (BOOL)isLynxListViewOnScreen;
- (void)pingbackVisibleCells;
- (double)cardTop;
- (void)pingbackWithIndex:(long long)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exposureHeight:(double)a2;
- (void)dynamicPingbackWithNoticeName:(id)a0 index:(long long)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 exposureHeight:(double)a3 rate:(double)a4;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
