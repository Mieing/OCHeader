@class NSString;

@interface MMFinderLiveAudioRoomMicUserView : MMFinderLiveAudioRoomMicUserBaseView <MMFinderLiveRedPacketViewModelObserver>

@property (nonatomic) BOOL forceShowPersonIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTapGesture:(id)a0;
- (BOOL)shouldForceStopAudioWaveAnimation;
- (void)layoutAvatarContainerView;
- (void)configSeatSlotViews;
- (id)getIconImageForSeatSlot;
- (void)layoutSeatSlotViews;
- (void)updateUserAvatarViewImageAndHidden;
- (void)layoutUserAvatarView;
- (void)updateTitleLabelText;
- (void)onClickMicMutedButton;
- (void)updateMicMutedButtonHidden;
- (void)configTitleLabelAndMicMutedButton;
- (id)tagViewShadowColor;
- (id)tagViewBackgroundColor;
- (void)updateSeatNameLabelHiddenAndText;
- (BOOL)shouldCreateRedPacketView;
- (void)onTapHeatValue;
- (void)updateMicUserInfo:(id)a0 seatInfo:(id)a1 isAdminMode:(BOOL)a2 audioRoomScene:(unsigned long long)a3 locationName:(id)a4 showLocation:(BOOL)a5 showPersonIcon:(BOOL)a6;
- (void)updateViewAfterSeatNameChanged;
- (void)updateViewAfterTalkingStatusChanged;
- (void)updateViewAfterMicMutedStatusChanged;
- (void)redPacketViewModel:(id)a0 hiddenDidChange:(BOOL)a1;

@end
