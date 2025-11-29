@class IESLiveWindowEntranceModel, UICollectionView, IESLiveImageView, UILabel, NSString;

@interface IESLiveNewAudienceWindowEntranceView : UIView <UICollectionViewDataSource>

@property (retain, nonatomic) IESLiveWindowEntranceModel *entranceModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *recommendTitleLabel;
@property (retain, nonatomic) UILabel *windowEntranceLabel;
@property (retain, nonatomic) IESLiveImageView *windowEntranceImageView;
@property (retain, nonatomic) UICollectionView *colllectionView;
@property (copy, nonatomic) id /* block */ onClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)tapGestureHandler;
- (void)p_renderView;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)updateWithModel:(id)a0;

@end
