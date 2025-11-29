@interface IESLiveRevenueImpl.IESLiveRebornGiftPageGiftDataHelper : NSObject <IESLiveGiftPanelDataSourceRequestDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuaration;
    void /* unknown type, empty encoding */ isEmptyPage;
    void /* unknown type, empty encoding */ requestLocalGiftPages;
    void /* unknown type, empty encoding */ aiServiceInsertMap;
    void /* unknown type, empty encoding */ clientAIGifts;
}

- (void)requestGiftListIncrementallyWithPageType:(id)a0 giftIDs:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
