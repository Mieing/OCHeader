@class WCPayOverseaPayFunctionListRespObject, NSString, WCPayOverseaIBGGetWalletCgiCache, WCBizLoadingView, WCPayOverseaReadActivityList, MMWebViewController, WCPayOverseaMainWalletDataSource, WCPayOverseaPayFunctionListCgi, WCPayOverseaIBGGetWalletCgi, UICollectionView;

@interface WCPayOverseaMainWalletViewController : WCBizBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCPayOverseaPayFunctionListCgiDelegate, WCPayOverseaIBGGetWalletCgiDelegate, WCActionSheetDelegate, WCPayNoticeBannerViewDelegate, MMWebViewDelegate>

@property (retain, nonatomic) WCPayOverseaPayFunctionListCgi *m_payFunctionCgi;
@property (retain, nonatomic) WCPayOverseaIBGGetWalletCgi *m_ibgGetWalletCgi;
@property (retain, nonatomic) UICollectionView *m_collectionView;
@property (retain, nonatomic) WCBizLoadingView *m_bizLoadingView;
@property (retain, nonatomic) WCPayOverseaMainWalletDataSource *m_dataSource;
@property (retain, nonatomic) WCPayOverseaPayFunctionListRespObject *m_payFunctionListRespObject;
@property (retain, nonatomic) WCPayOverseaIBGGetWalletCgiCache *m_walletResp;
@property (retain, nonatomic) WCPayOverseaReadActivityList *m_readActivityList;
@property (nonatomic) unsigned int m_walletRegion;
@property (nonatomic) unsigned int m_lastWalletCgiRequestTime;
@property (retain, nonatomic) MMWebViewController *m_userKeyInfoWebViewController;
@property (nonatomic) BOOL m_hasShownKeyInfo;
@property (nonatomic) BOOL m_disableResetAccessibilityFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateViewData;
- (void)updateTips;
- (void)updateBizLoadingView;
- (void)updateTitle;
- (void)updateRightNavigationItem;
- (void)onClickRightNavigationItem:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupAccessibilityFocus;
- (void)updateCollectionView;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (unsigned long long)rowCount;
- (void)onWCPayOverseaPayFunctionCgiOkWithRespObject:(id)a0;
- (void)onWCPayOverseaPayFunctionCgiErrorWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (void)onWCPayOverseaIBGGetWalletCgiOkWithRespObject:(id)a0 withOriginRespObject:(id)a1;
- (void)onWCPayOverseaIBGGetWalletCgiErrorWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (id)utf8String:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onWCPayNoticeBannerView:(id)a0 clickWithUrl:(id)a1;
- (void)reportClickOnUrl:(id)a0 funcid:(unsigned int)a1;
- (void)reportGrayItemClickOnUrl:(id)a0;
- (void).cxx_destruct;

@end
