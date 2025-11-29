@class NSArray, NSString, UICollectionView;
@protocol AWECityManagerProtocol;

@interface AWENearbySwitchChannelPanelContentView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) id<AWECityManagerProtocol> cityManager;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long currentFeedType;
@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ channelSelectBlock;
@property (copy, nonatomic) id /* block */ citySelectBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchChannel:(long long)a0;
- (id)initWithFeedType:(long long)a0;
- (void)reloadCitiesData;
- (void)onCitySelected:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)setupUI;
- (void)reloadData:(long long)a0;

@end
