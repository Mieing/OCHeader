@interface FlowKit.MessagingDeepSearchDataSourceComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMChatServiceDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ messageNeedCollect;
    void /* unknown type, empty encoding */ normalRenderSuggestCreated;
    void /* unknown type, empty encoding */ streamSuggestCreated;
    void /* unknown type, empty encoding */ $__lazy_storage_$_deepSearchData;
    void /* unknown type, empty encoding */ suggestMessages;
}

- (void)messageSendStartWithMessage:(id)a0;
- (void)messageSendEndWithMessage:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)streamRenderWithMessages:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
