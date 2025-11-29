@class WCPayOverseaIBGGetWalletCgiCache;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayOverseaMainWalletBannerData : WCPayOverseaMainWalletData

@property (retain, nonatomic) WCPayOverseaIBGGetWalletCgiCache *m_walletResp;
@property (weak) id<WCPayNoticeBannerViewDelegate> m_noticeDelegate;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (double)totalHeight;
- (double)caluateDynamicCellHeight:(id)a0;
- (float)headerViewHeight:(id)a0;
- (void).cxx_destruct;

@end
