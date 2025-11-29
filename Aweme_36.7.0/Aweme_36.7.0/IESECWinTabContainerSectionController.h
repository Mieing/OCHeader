@class IESECWinTabContainerCell, NSString, IESECServiceProxy, IESECWinTabContainerObject, IESECWinFeedFlowLayout, FBKVOController;
@protocol IESECWinDataService, IESECWinMainScrollService, IESECWinTabService, IESECWinCategoryService, IESECWinPageCardService, IESECWinFeedLinkedService, IESECWinLynxCardService, IESECWinTabViewControllerManager, IESECWinSplitService, IESECWinDataStatusService;

@interface IESECWinTabContainerSectionController : IESECWinListKitCellController <IESECWinTabContainerCellContainerViewDelegate> {
    IESECWinTabContainerObject *_object;
    BOOL _isFirstShow;
}

@property (retain, nonatomic) FBKVOController *KVOCtrl;
@property (retain, nonatomic) IESECWinFeedFlowLayout *flowLayout;
@property (weak, nonatomic) IESECWinTabContainerCell *containerCell;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinPageCardService> *pageCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedLinkedService> *linkedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *contentVCManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)p_addObserver;
- (id)tabbarView;
- (id)configWithCell:(id)a0;
- (id)tabContainer:(id)a0 tabViewElementForIndex:(long long)a1;
- (long long)numberOfTabViewElementsInTabContainer:(id)a0;
- (void)tabContainer:(id)a0 willMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 cancelMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabContainer:(id)a0 didMoveToIndex:(long long)a1 withTabElement:(id)a2;
- (void)tabTrackWithEvent:(id)a0 tab:(id)a1 clickType:(id)a2 onceKey:(id)a3;
- (void)configTabContainer;
- (void)configCellCorner;
- (void)configScrollMode;
- (void)tabTrackWithEvent:(id)a0 tab:(id)a1 clickType:(id)a2;
- (void)tabViewElementUpdatedWithTab:(id)a0 isUserScroll:(BOOL)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (long long)selectedIndex;
- (void)scrollViewDidScroll;
- (id)selectedViewController;
- (id)currentCell;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
