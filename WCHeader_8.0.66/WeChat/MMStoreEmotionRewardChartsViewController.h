@class EmoticonStoreItem, NSString, NSArray, EmotionStoreRewardDonorHeader, StoreEmotionGetDonorListCgi, UIImage, EmotionRewardResponseInfo, UICollectionView, EmotionCollectionFooterView;

@interface MMStoreEmotionRewardChartsViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, StoreEmotionGetDonorListCgiDelegate, EmotionCollectionFooterViewDelegate> {
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    NSArray *m_donors;
    StoreEmotionGetDonorListCgi *m_getDonorListCgi;
    UICollectionView *m_collectionView;
    EmotionStoreRewardDonorHeader *m_collectionHeaderView;
    EmotionCollectionFooterView *m_collectionFooterView;
    UIImage *m_defaultHeadImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStoreItem:(id)a0 RewardInfo:(id)a1;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewDidLoad;
- (void)initView;
- (void)onClose;
- (void)onGetDonorsListSuccessedWithPid:(id)a0 Donors:(id)a1 DonorNum:(unsigned int)a2 hasMore:(BOOL)a3;
- (void)onGetDonorsListFailedWithPid:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;

@end
