@class NSString, RingToneDetail, RingToneMixPlayer, RingTonePickTableViewCell, UIImageView, RingToneContactSelectViewController, MMUIViewController;
@protocol RingBackInfoDisplaySheetViewDelegate;

@interface RingBackInfoDisplaySheetView : MMAutoLayoutSheetView <IVOIPWindowExt, RingTonePickTableViewCellDelegate, SelectContactsViewControllerDelegate, RingToneContactSelectViewController> {
    BOOL _isSelected;
}

@property (retain, nonatomic) RingToneDetail *ring;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) RingToneMixPlayer *player;
@property (retain, nonatomic) RingTonePickTableViewCell *ringInfoCell;
@property (weak, nonatomic) RingToneContactSelectViewController *selectVC;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (weak, nonatomic) id<RingBackInfoDisplaySheetViewDelegate> delegate;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL shouldShowUserStatus;
@property (nonatomic) BOOL shouldShowFriendSettings;
@property (retain, nonatomic) NSString *friendName;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long feedEnterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genTextStatusJumpInfoRingtonePB:(id)a0;

- (id)initWithRingToneDetail:(id)a0 scene:(unsigned long long)a1 userName:(id)a2;
- (id)initWithFinderItem:(id)a0 type:(long long)a1 userName:(id)a2;
- (void)report24158Data:(unsigned long long)a0 friendName:(id)a1 userName:(id)a2;
- (void)dealloc;
- (void)customArrangeViews;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)playRing;
- (void)stopRing;
- (void)setVOIPContactStyleUI;
- (void)setHasUsedRingStyleUI;
- (void)setCommonStyleUIWithTitle:(id)a0;
- (void)addGuideInfoLabel;
- (void)addCustomTitle:(id)a0;
- (void)addSpaceView:(double)a0;
- (void)addMusicInfoView;
- (void)addSettingButtonWithTitle:(id)a0;
- (void)addSetRingForFriendsBtn;
- (void)setRingForFriends;
- (void)addUserStateView;
- (void)onSelectButtonClick;
- (void)reloadContent;
- (void)onTapSettingRing;
- (void)onTapJumpToFinder;
- (void)pageSheetWillAppear;
- (id)curViewController;
- (void)onTapPlayRingTone:(id)a0 isToPlay:(BOOL)a1;
- (void)onTapJumpFinder:(id)a0;
- (void)onVoipWindowDisappear;
- (void)onVoipWindowDidAppear;
- (void)sendTextState;
- (void)onSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)didSelectFriendContact:(id)a0;
- (void).cxx_destruct;

@end
