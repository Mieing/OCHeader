@class NSString;

@interface AWEDYPOIModuleService : AWEPOIModuleService <AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)task:(id)a0 didBeginWithInfo:(id)a1;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (id)createLiveLocationViewContainerWithScene:(unsigned long long)a0 params:(id)a1 poiIDDidChangeBlock:(id /* block */)a2 didDismissBlock:(id /* block */)a3;
- (id)createHalfScreenLocationViewContainerWithParams:(id)a0 poiIDDidChangeBlock:(id /* block */)a1 didDismissBlock:(id /* block */)a2;
- (BOOL)shouldShowUnusedCounponsBubble;
- (BOOL)shouldShowCouponGuideInSideBar;
- (BOOL)shouldHasAnchorViewDataForCommentList:(id)a0;
- (BOOL)shouldShowPoiButton:(id)a0 isParentChildPoi:(BOOL)a1;
- (BOOL)shouldShowPoiExtraInfo:(id)a0 didHasPoiPagePoiId:(BOOL)a1 isParentChildPoi:(BOOL)a2;
- (BOOL)shouldShowPoiDetail:(id)a0 poiInfo:(id)a1 didHasPoiPagePoiId:(BOOL)a2 isParentChildPoi:(BOOL)a3;
- (BOOL)isCurrentPageIsPOIRating:(id)a0;
- (void)handleBubbleDisplayed;
- (void)handleReceiveCoupon;
- (void)handleEnterCouponPage;
- (BOOL)hasUnreadCouponStatusChanged;
- (void)handleMerchantEntryTapped;
- (BOOL)shouldShowEmphraseCollectAnchorView:(id)a0;
- (id)createEmphraseCollectAnchorViewControllerWithModuleName:(id)a0 uniqueObj:(id)a1 anchorStyle:(unsigned long long)a2;
- (void)collectPOI:(id)a0 awemeID:(id)a1 isCollect:(BOOL)a2 needHintToast:(BOOL)a3 extraParams:(id)a4 loginTrackParams:(id)a5 loginResult:(id /* block */)a6 completion:(id /* block */)a7;
- (id)createLiveLocationManagerViewControllerWithScene:(unsigned long long)a0 viewControllerWillHideBlock:(id /* block */)a1 poiIDDidChangeBlock:(id /* block */)a2 room:(id)a3;

@end
