@interface MMIndexedContainerView : MMUIView

@property (nonatomic) long long numOfViewsNoGreaterThanDefault;
@property (nonatomic) long long defaultIndexBeginPos;
@property (nonatomic) long long onceFlag;
@property (nonatomic) BOOL shouldEnableIndexing;

- (long long)subviewBottomMostIndex;
- (long long)subviewDefaultIndex;
- (long long)subviewDefaultFrontIndex;
- (long long)subviewTopMostIndex;
- (BOOL)enableSubviewIndexing;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)exchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;
- (void)addSubview:(id)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)bringSubviewToFront:(id)a0;
- (void)sendSubviewToBack:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)addSubview:(id)a0 atHierarchyIndex:(long long)a1;
- (void)_addSubview:(id)a0 atHierarchyIndex:(long long)a1;
- (void)changeHierarchyIndexForSubview:(id)a0 newHierarchyIndex:(long long)a1;
- (void)_changeHierarchyIndexForSubview:(id)a0 newHierarchyIndex:(long long)a1;
- (void)handleInsertSubview:(id)a0 atIndex:(long long)a1;
- (void)_handleInsertSubview:(id)a0 atIndex:(long long)a1;
- (void)handleExchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;
- (void)_handleExchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;
- (void)handleAddSubview:(id)a0;
- (void)_handleAddSubview:(id)a0;
- (void)handleInsertSubview:(id)a0 belowSubview:(id)a1;
- (void)_handleInsertSubview:(id)a0 belowSubview:(id)a1;
- (void)handleInsertSubview:(id)a0 aboveSubview:(id)a1;
- (void)_handleInsertSubview:(id)a0 aboveSubview:(id)a1;
- (void)handleBringSubviewToFront:(id)a0;
- (void)_handleBringSubviewToFront:(id)a0;
- (void)handleSendSubviewToBack:(id)a0;
- (void)_handleSendSubviewToBack:(id)a0;
- (void)handleWillRemoveSubview:(id)a0;
- (void)updateDefaultIndexRangeAfterInsertSubview:(id)a0;
- (id)debugHierarchyInfo;
- (void)checkCurrentHierarchy;
- (void)setHierarchyIndex:(long long)a0 forView:(id)a1;
- (long long)getHierarchyIndexFromView:(id)a0;

@end
