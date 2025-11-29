@interface IESLiveRevenueImpl.IESLiveRebornGiftPageViewWrapper : NSObject <IESLiveGiftPanelReaction, IESLiveRefactGiftPanelEventAction> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSharing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retainedDI;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventDataController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyPageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ collectionVMsSubscriptions;
}

- (void)sendCurrentSelectedItem;
- (void)changeTabWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (void)initTabWithIndex:(unsigned long long)a0;
- (void)hidePanel:(BOOL)a0;
- (void)gpe_changeTabWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (void)gpe_changeTopicWithId:(long long)a0 pageType:(long long)a1 needScroll:(BOOL)a2;
- (void)gpe_giftListCollectionViewWillDisplay;
- (void)gpe_giftListScrollViewDidScroll:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewDidEndDecelerating:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_giftListScrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)gpe_giftListScrollViewWillBeginDragging:(id)a0 tabIndex:(long long)a1 layoutDirection:(long long)a2;
- (void)gpe_sendCurrentSelectedItem;
- (void)gpe_giftPageScrollViewDidScroll:(id)a0;
- (void)gpe_rebornDynamicGiftPanelAddSubview:(id)a0 originalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 originalSuperview:(id)a2;
- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)init;

@end
