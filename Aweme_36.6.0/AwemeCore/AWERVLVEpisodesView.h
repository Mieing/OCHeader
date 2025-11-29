@class UIView, NSString, NSArray, UIImageView, BDImageView, UICollectionView, AWELVideoAlbumInfoModel, UILabel;
@protocol AWERVLVEpisodesViewDelegate, AWERVLVSelectDelegate;

@interface AWERVLVEpisodesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BDImageView *icon;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *moreView;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIImageView *moreImg;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *episodeList;
@property (nonatomic) BOOL isOnPannel;
@property (weak, nonatomic) id<AWERVLVEpisodesViewDelegate> delegate;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> selectDelegate;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic, getter=isFromFeedShare) BOOL fromFeedShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowGuide;
- (void)showXiguaGuideTitleIfNeeded;
- (void)updateWithModel:(id)a0 title:(id)a1 subTitle:(id)a2 episodeList:(id)a3 currentSelectIndex:(long long)a4;
- (void)updateWithModel:(id)a0 episodeList:(id)a1 currentSelectIndex:(long long)a2;
- (void)refreshUIAfterUpdate;
- (void)showAllPanel;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFlag:(BOOL)a0;
- (void)setupUI;

@end
