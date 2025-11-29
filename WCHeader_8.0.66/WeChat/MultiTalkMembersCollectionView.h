@class NSString, NSArray, MMTimer, UIViewPropertyAnimator, UIScrollView, NSObject, UIButton;
@protocol MultiTalkMemberProtocol, MultiTalkMembersViewDelegate;

@interface MultiTalkMembersCollectionView : UIView <UIScrollViewDelegate, MultiTalkMemberCellDelegate, MultiTalkMembersViewProtocol>

@property (retain, nonatomic) UIScrollView *contentsView;
@property (retain, nonatomic) NSArray *itemsArray;
@property (nonatomic) BOOL sharingScreenEnable;
@property (retain, nonatomic) NSObject<MultiTalkMemberProtocol> *selectedMember;
@property (nonatomic) BOOL isTalking;
@property (nonatomic) BOOL isReloading;
@property (retain, nonatomic) UIViewPropertyAnimator *reloadViewPropertyAnimator;
@property (retain, nonatomic) MMTimer *waittingTimer;
@property (retain, nonatomic) UIButton *flipCameraButton;
@property (retain, nonatomic) UIButton *virtualBackgroundButton;
@property (nonatomic) BOOL isCameraOpen;
@property (nonatomic) BOOL frontVirtualBackgroundOn;
@property (nonatomic) BOOL backVirtualBackgroundOn;
@property (nonatomic) BOOL isFrontCamera;
@property (nonatomic) BOOL isAudioInterruption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MultiTalkMembersViewDelegate> delegate;
@property (nonatomic) BOOL isInMinimizeMode;
@property (nonatomic) int needShowContactInviteInfo;

+ (id)normalVoipDescriptButtonBackImage;
+ (id)selectedVoipDescriptButtonBackImage;

- (void)checkVisableMembers;
- (id)cellFromMemberUserName:(id)a0;
- (unsigned long long)indexForMemberCell:(id)a0;
- (unsigned long long)selectedIndex;
- (void)layoutContentsView;
- (void)onContentsViewTap:(id)a0;
- (id)memberCellWithMember:(id)a0;
- (void)reloadScreenSharingAudienceWithEnable:(BOOL)a0;
- (struct CGSize { double x0; double x1; })noramlCellSizeForMembersCount:(unsigned long long)a0 hasSelection:(BOOL)a1;
- (struct CGSize { double x0; double x1; })selectedCellSizeForMembersCount:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameInContentViewWithIndex:(unsigned long long)a0 membersCount:(unsigned long long)a1 selectedIndex:(unsigned long long)a2;
- (void)layoutCellsOnTalking;
- (void)layoutCellsBeforeTalking;
- (void)layoutCells;
- (void)layoutCameraRelativeBtn:(id)a0;
- (void)reloadMembers;
- (void)reloadSelectedMember:(id)a0;
- (void)setupAudioInterruption:(BOOL)a0;
- (void)onClickCell:(id)a0;
- (void)checkMemberWaitting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)changeViewToTalkingMode;
- (BOOL)isInBigSharingScreenMode;
- (void)multiTalkWindowChange:(BOOL)a0;
- (void)layoutAfterBottomPanelChange;
- (void)reloadButtonsForVideoStatus:(BOOL)a0;
- (void)reloadData;
- (void)reloadDataBeforeTalking;
- (void)updateIpadOrientationAfterFrameChange;
- (void)updateMuteState:(BOOL)a0;
- (void)updateTalkingMembersWithUsersName:(id)a0;
- (void)videoMembersInfoChanged;
- (struct CGSize { double x0; double x1; })realContentsSize;
- (void)checkIfSetVirtualBackgroundSelect;
- (void)hideButtonsForCameraMode;
- (void)changeIntoDefaultBigView;
- (void)onFlipCameraButtonClick;
- (void)onBackgroundSelect;
- (int)getIfneedShowContactInviteInfo;
- (void).cxx_destruct;

@end
