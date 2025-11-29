@class IESECShopInnerFlowDiffableModel, NSMapTable, NSString, IESECShopInnerFlowSliceSectionViewModel, NSMutableArray, IESECShopInnerFlowContext;
@protocol IESLiveEcommerceSKUInterface;

@interface IESECShopInnerFlowSectionController : IGListSectionController <IESECShopInnerFlowLynxCardDelegate, IESECShopInnerFlowSliceCardDelegate> {
    BOOL _firstCardShowHasTracked;
}

@property (retain, nonatomic) IESECShopInnerFlowDiffableModel *diffableModel;
@property (retain, nonatomic) IESECShopInnerFlowContext *context;
@property (retain, nonatomic) NSMutableArray *lynxCardsPools;
@property (retain, nonatomic) id<IESLiveEcommerceSKUInterface> SKUManager;
@property (retain, nonatomic) IESECShopInnerFlowSliceSectionViewModel *sliceSectionVM;
@property (retain, nonatomic) NSMapTable *cachedHeightMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)didUpdateToObject:(id)a0;
- (void)showGestureInstruction;
- (void)sendShowEvent;
- (id)skeletonImageName;
- (void)initLynxCardsPools;
- (BOOL)checkNeedUpdate:(id)a0 itemID:(id)a1;
- (id)buildLynxCardModel:(id)a0;
- (id)buildCartBridge:(id)a0;
- (void)trackFirstCardShow:(BOOL)a0;
- (BOOL)canShowGestureInstruction;
- (void)updateExposurePercent:(double)a0 index:(long long)a1;
- (void)updateItemStates:(id)a0 atIndex:(long long)a1;
- (void)sliceXContentView:(id)a0 index:(long long)a1 didUpdateViewSize:(struct CGSize { double x0; double x1; })a2;
- (id)cellViewAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (double)minimumLineSpacing;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
