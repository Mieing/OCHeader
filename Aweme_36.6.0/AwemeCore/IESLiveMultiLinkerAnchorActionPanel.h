@class IESLiveMultiLinkerAnchorActionConfig, UICollectionView, NSString, UILabel, NSMutableArray;
@protocol IESLiveInteractUserModel, IESLiveMultiLinkerAnchorActionPanelDelegate;

@interface IESLiveMultiLinkerAnchorActionPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *kickOutLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) IESLiveMultiLinkerAnchorActionConfig *actionConfig;
@property (retain, nonatomic) NSMutableArray *items;
@property (weak, nonatomic) id<IESLiveMultiLinkerAnchorActionPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackItemClick:(id)a0;
- (void)onKickOutClicked;
- (id)buildItemByType:(unsigned long long)a0 isFocusNotLarge:(BOOL)a1;
- (id)clickPositionForTrack;
- (BOOL)isPunishedUser;
- (id)initWithUser:(id)a0 isMute:(BOOL)a1 actionConfig:(id)a2 diContext:(id)a3;
- (id)adminNickName;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupSubviews;
- (void)setupData;
- (id)buildTitleString;

@end
