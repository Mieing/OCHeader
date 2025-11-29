@class IESECWinLynxCardDiffableModel, NSString, IESECServiceProxy, FBKVOController, IESECWinContext;
@protocol IESECWinSplitService, IESECWinTabService, IESECWinOpportunityService, IESECWinLynxCardService, IESECWinLynxPreloadService;

@interface IESECWinLynxSectionController : IGListSectionController <IESECLynxCollectionViewCellDelegate, IGListDisplayDelegate, IESECListCardsContextDelegate, IESECWinOpportunityService>

@property (retain, nonatomic) IESECWinLynxCardDiffableModel *object;
@property (retain, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxPreloadService> *preloadService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 perfDict:(id)a2;
- (BOOL)pageDidAppeared;
- (id)currentListContextIdForCards;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)didUpdateToObject:(id)a0;
- (void)removeSelf;
- (void)lynxCard:(id)a0 setupPerf:(id)a1;
- (void)lynxCard:(id)a0 updatePerf:(id)a1;
- (void)tabViewController_viewWillAppear:(BOOL)a0;
- (void)tabViewController_viewWillDisappear:(BOOL)a0;
- (void)puzzleHybridPopControllerDismissedWithObject:(id)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
