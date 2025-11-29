@class WCRedEnvelopesReceiveHomeView, NSMutableDictionary, UICollectionView, WCRedEnvelopesAtmospherePagView, UICollectionViewFlowLayout, NSString, WCRedEnvelopesExpiredSkinViewControllerFooter;
@protocol WCRedEnvelopesExpiredSkinViewControllerDelegate;

@interface WCRedEnvelopesExpiredSkinViewController : WCRedEnvelopesBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCActionSheetDelegate, WCRedEnvelopesReceiveHomeViewDelegate> {
    WCRedEnvelopesReceiveHomeView *introView;
}

@property (retain, nonatomic) UICollectionView *m_collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *m_flowLayout;
@property (retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict;
@property (nonatomic) BOOL viewDidBack;
@property (retain, nonatomic) WCRedEnvelopesExpiredSkinViewControllerFooter *footerView;
@property (nonatomic) unsigned int cellHeight;
@property (retain, nonatomic) WCRedEnvelopesAtmospherePagView *atmospherePagView;
@property (weak, nonatomic) id<WCRedEnvelopesExpiredSkinViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setResponseData:(id)a0;
- (void)setDelegate:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)updateNavigationbarItem;
- (void)onBack;
- (void)refreshViewWithData:(id)a0;
- (BOOL)shouldAutorotate;
- (void)updateViewData;
- (void)updateCollectionView;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)getNextPage:(id)a0;
- (id)filterServerResponse:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)isShowLimitedWording;
- (id)redEnvelopesBaseInfoDict;
- (void)onTapCell:(id)a0;
- (BOOL)shouldShowAtmospherePagView;
- (void)onLongPressCell:(id)a0;
- (id)getData;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)deleteHbEnvelopSource:(id)a0;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)closeIntroView;
- (void).cxx_destruct;

@end
