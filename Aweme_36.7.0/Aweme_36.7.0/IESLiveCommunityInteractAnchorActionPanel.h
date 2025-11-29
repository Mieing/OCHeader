@class NSString, UICollectionView, UILabel, NSMutableArray;
@protocol IESLiveInteractUserModel, IESLiveCommunityInteractAnchorActionPanelDelegate;

@interface IESLiveCommunityInteractAnchorActionPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *kickOutLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) id<IESLiveCommunityInteractAnchorActionPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildItemByType:(unsigned long long)a0;
- (void)onKickOutClicked;
- (id)initWithUser:(id)a0 diContext:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupSubviews;
- (void)setupData;
- (id)buildTitleString;

@end
