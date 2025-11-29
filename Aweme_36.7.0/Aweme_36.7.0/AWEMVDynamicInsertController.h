@class NSString, NSMutableArray, AWEAwemeModel;

@interface AWEMVDynamicInsertController : AWEDCFeedBaseController <AWEMVDynamicInsertMessage, AWEMVDynamicInsertDetailViewMessage>

@property (retain, nonatomic) NSMutableArray *insertModels;
@property (nonatomic) unsigned long long lastRouteScene;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL inDetail;
@property (nonatomic) BOOL hasInsert;
@property (retain, nonatomic) AWEAwemeModel *recentlyEnterModel;
@property (retain, nonatomic) AWEAwemeModel *recentlyExitModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)enterDetailVCAtIndexPath:(id)a0 withModel:(id)a1 referString:(id)a2 selectedCell:(id)a3;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)removeModels:(id)a0;
- (id)listViewModel;
- (void)didEnterDetailViewWithModel:(id)a0;
- (void)didLeaveDetailViewWithModel:(id)a0;
- (id)mvContext;
- (double)calculateJointPercentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dynamicInsert:(id)a0;
- (unsigned long long)canInsertWithInsertModel:(id)a0 option:(struct AWEMVDynamicInsertOption { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a1;
- (id)preHandelAwemeModels:(id)a0 option:(struct AWEMVDynamicInsertOption { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a1;
- (void)insertModel:(id)a0;
- (void)startInsertProcessFromScene:(unsigned long long)a0;
- (id)dequeueHighestPriorityModelWithRouteScene:(unsigned long long)a0;
- (id)indexPathFromInsertModel:(id)a0;
- (void)defaultDynamicInsert:(id)a0 insertModel:(id)a1 indexPath:(id)a2 option:(struct AWEMVDynamicInsertOption { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a3 completion:(id /* block */)a4;
- (double)calculateJointPercentForCellWithVisibleArea:(id)a0;
- (void)onEnterDetailWithModel:(id)a0;
- (void)onExitDetailWithModel:(id)a0;
- (void)clearInsertData;
- (void)insertAwemeModels:(id)a0 insertModel:(id)a1 indexPath:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)scrollIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
