@class NSString, UICollectionViewFlowLayout, NSMutableDictionary, HbEnvelopSource, WCRedEnvelopeFlowViewDetailView, NSMutableArray, UICollectionView, WCRedEnvelopesControlData, WCRedEnvelopesExpiredSkinViewControllerFooter;
@protocol WCRedEnvelopeSelectSkinFlowViewDelegate;

@interface WCRedEnvelopeSelectSkinFlowView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WCRedEnvelopeFlowViewDetailViewDelegate, WCRedEnvelopesExpiredSkinEntryCollectionViewCellDelegate, WCActionSheetDelegate, WCRedEnvelopesCustomizeSkinEntryCellDelegate> {
    WCRedEnvelopesControlData *m_data;
    WCRedEnvelopeFlowViewDetailView *introView;
    BOOL _bHasReportCanShowExpireEntry;
}

@property (retain, nonatomic) UICollectionView *m_collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *m_flowLayout;
@property (retain, nonatomic) NSMutableDictionary *m_cellIdentifierDict;
@property (nonatomic) unsigned int cellHeight;
@property (retain, nonatomic) NSMutableArray *redEnvelopesList;
@property (nonatomic) unsigned int currentIndex;
@property (nonatomic) BOOL isShowDetailView;
@property (retain, nonatomic) HbEnvelopSource *currentSource;
@property (weak, nonatomic) id<WCRedEnvelopeSelectSkinFlowViewDelegate> m_delegate;
@property (retain, nonatomic) WCRedEnvelopesExpiredSkinViewControllerFooter *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onWCRedEnvelopeFlowViewDetailViewGotoPreview:(id)a0;
- (void)showDetailViewIfNeeded;
- (void)closeIntroView;
- (id)getData;
- (void)deleteHbEnvelopSource:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData:(id)a0;
- (void)refreshViewWithData;
- (void)scrollToCurrentIndex:(BOOL)a0;
- (void)switchToIndex:(long long)a0 animated:(BOOL)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onWCRedEnvelopesCustomizeSkinEntryCellClickEntry:(id)a0;
- (void)onWCRedEnvelopesExpiredSkinEntryCollectionViewCellClickEntry;
- (void)onLongPressCell:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onTapCustomizeCell:(id)a0;
- (void)onTapExpiredCell:(id)a0;
- (void)onTapCell:(id)a0;
- (void)onWCRedEnvelopeFlowViewDetailViewCancel;
- (void)onWCRedEnvelopeFlowViewDetailViewSelect:(id)a0;
- (void).cxx_destruct;

@end
