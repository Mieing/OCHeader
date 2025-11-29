@class NSString, UICollectionView, UILabel, UIView, AWESearchAIGCSharePanelPublishCoverViewModel;
@protocol AWESearchAIGCSharePanelPublishCoverViewDelegate;

@interface AWESearchAIGCSharePanelPublishCoverSupplementaryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *coverCollectionView;
@property (retain, nonatomic) AWESearchAIGCSharePanelPublishCoverViewModel *model;
@property (weak, nonatomic) id<AWESearchAIGCSharePanelPublishCoverViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
