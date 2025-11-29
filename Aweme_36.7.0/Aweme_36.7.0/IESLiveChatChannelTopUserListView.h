@class UIView, NSString, HTSEventContext, IESLiveChatChannelTopUserListAvatarCell, CALayer, UIButton, IESLiveChatChannelTopUserListViewModel, IESLiveButton, UICollectionView, IESLivePSComponentConfigModel;

@interface IESLiveChatChannelTopUserListView : UIView <IESLiveMessageInteractionModuleCommentAction, IESLiveChatChannelTopUserListUpdatable, UICollectionViewDelegate, UICollectionViewDataSource, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) IESLiveChatChannelTopUserListViewModel *viewModel;
@property (retain, nonatomic) IESLiveChatChannelTopUserListAvatarCell *ownerCell;
@property (retain, nonatomic) UICollectionView *userCollectionView;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *userContainer;
@property (retain, nonatomic) UIView *ownerSeperator;
@property (retain, nonatomic) UIButton *detailButton;
@property (retain, nonatomic) IESLiveButton *remoteVolumeButton;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL shouldShowGradientMask;
@property (retain, nonatomic) CALayer *gradientMaskLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)bindViewModel:(id)a0;
- (void)updateWithUserCount:(long long)a0;
- (void)detailButtonClicked:(id)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)layoutWithMaxWidthIfNeeded:(double)a0;
- (void)addOwnerSeperator;
- (void)updateWithOwnerUserCell:(id)a0;
- (void)resetSeperatorIfNeeded;
- (void)updateWithUserCells:(id)a0 animated:(BOOL)a1;
- (void)updateVolumeButtonStyle;
- (void)containerDidTap:(id)a0;
- (void)handleRemoteVolumeButtonClicked;
- (void)updateVolumeButton:(id)a0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void).cxx_destruct;
- (void)updateList:(id)a0;
- (void)updateConstraints;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (void)setup;
- (double)avatarWidth;

@end
