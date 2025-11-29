@interface IESLiveRevenueImpl.IESLiveRebornGiftDynamicPanelViewWrapper : NSObject <IESLiveGiftPanelReaction, IESLiveGiftDynamicPanelClientAIDataService, IESLiveRefactGiftPanelEventAction> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSharing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_retainedDI;
    void /* unknown type, empty encoding */ $__lazy_storage_$_eventDataController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyDynamicPanelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ currentAIGifts;
}

- (void)sendCurrentSelectedItem;
- (void)changeTabWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (void)initTabWithIndex:(unsigned long long)a0;
- (void)hidePanel:(BOOL)a0;
- (id)getClientAIGifts;
- (void)gpe_changeTabWithIndex:(unsigned long long)a0 active:(BOOL)a1;
- (void)gpe_giftListSortTypeDidChange:(long long)a0;
- (void)gpe_changeTabBackgroundImageUrlList:(id)a0;
- (void)gpe_dynamicGiftPanelLynxLoadFinished;
- (void)gpe_changeTopicWithId:(long long)a0 pageType:(long long)a1 needScroll:(BOOL)a2;
- (void)gpe_giftTopicExpandStatusWillChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)gpe_giftOperationChangeToExpand:(BOOL)a0 isFromExtraRefresh:(BOOL)a1;
- (void)gpe_giftTopicExpandStatusDidChangeToExpand:(BOOL)a0 pageType:(long long)a1;
- (void)gpe_showBigGiftCountDownView:(long long)a0 item:(id)a1 transaction:(id)a2 dynamicParams:(id)a3;
- (void)didSetAttachingDIContext;
- (void).cxx_destruct;
- (id)init;

@end
