@class NSDictionary, NSMutableSet, AWELeftSideBarFunctionModel;
@protocol AWELeftSideBarItemContext, AWELeftSideBarFunctionManagerDelegate;

@interface AWELeftSideBarFunctionManager : NSObject

@property (copy, nonatomic) NSDictionary *itemObjectMap;
@property (nonatomic) BOOL isCalculatingClientModel;
@property (retain, nonatomic) NSMutableSet *needsReplenishCalculateItemSizePageLevelSet;
@property (readonly, nonatomic) AWELeftSideBarFunctionModel *serverModel;
@property (readonly, nonatomic) AWELeftSideBarFunctionModel *clientModel;
@property (readonly, nonatomic) id<AWELeftSideBarItemContext> context;
@property (weak, nonatomic) id<AWELeftSideBarFunctionManagerDelegate> delegate;

- (void)p_eachPresenterPerformBlock:(id /* block */)a0;
- (void)p_eachPresenterInPage:(long long)a0 performBlock:(id /* block */)a1;
- (id)allModuleModels;
- (void)p_eachPresenterInModuleModels:(id)a0 performBlock:(id /* block */)a1;
- (void)eventDispatch_onLeftSideBarWillOpen;
- (void)eventDispatch_onLeftSideBarOpen;
- (void)eventDispatch_onLeftSideBarClose;
- (void)eventDispatch_leftSideBarThemeDidChange:(long long)a0;
- (void)eventDispatch_leftSideBarViewWillAppearWithPageLevel:(long long)a0;
- (void)eventDispatch_leftSideBarViewDidAppearWithPageLevel:(long long)a0;
- (void)eventDispatch_leftSideBarViewWillDisappearWithPageLevel:(long long)a0;
- (void)eventDispatch_leftSideBarViewDidDisappearWithPageLevel:(long long)a0;
- (void)eventDispatch_showReloadAnimationWithPageLevel:(long long)a0;
- (void)eventDispatch_leftSideBarEntranceViewOnCreateWithAmbienceIdentification:(id)a0;
- (void)eventDispatch_leftSideBarEntranceViewOnShowWithAmbienceIdentification:(id)a0;
- (void)eventDispatch_leftSideBarEntranceViewOnHideWithAmbienceIdentification:(id)a0;
- (void)eventDispatch_leftSideBarBussinessEntranceViewOnRemoved:(unsigned long long)a0;
- (void)p_calculateClientModel;
- (id)itemObjectWithBusinessID:(id)a0;
- (id)presenterWithBusinessID:(id)a0;
- (void)p_calculateItemSizeWithModuleModelIfNeeded:(id)a0;
- (id)p_createOrUpdateItemObjectWithItemMode:(id)a0;
- (void)p_replenishCalculateItemSizeIfNeeded;
- (id)p_tryReuseExistedItemObjectWithItemMode:(id)a0;
- (id)p_createItemContextWithItemMode:(id)a0;
- (id)p_leftSideBarProxyForPresenter:(id)a0;
- (id)p_leftSideBarEntranceViewProxyForPresenter:(id)a0;
- (id)p_leftSideBarMessageReachProxyForPresenter:(id)a0;
- (long long)p_pageLevelForItemModel:(id)a0;
- (void)calculateItemSizeWithPageLevel:(long long)a0;
- (void)updateWithServerModel:(id)a0 context:(id)a1;
- (id)dynamicBusinessIDSet;
- (BOOL)hasItemObjectWithPageLevel:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
