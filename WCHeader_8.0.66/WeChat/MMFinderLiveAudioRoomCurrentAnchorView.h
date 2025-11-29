@class WCFinderContact;

@interface MMFinderLiveAudioRoomCurrentAnchorView : MMFinderLiveAudioRoomMicUserBaseView

@property (retain, nonatomic) WCFinderContact *anchorContact;

- (void)handleTapGesture:(id)a0;
- (void)layoutAvatarContainerView;
- (void)configUserAvatarView;
- (void)layoutUserAvatarView;
- (void)updateTitleLabelText;
- (void)configTitleLabelAndMicMutedButton;
- (void)onClickMicMutedButton;
- (void)updateAnchorMicMutedButtonHidden;
- (void)updateAnchorMicMutedButtonHiddenWithLayoutFlag:(BOOL)a0;
- (id)tagLabelTextColor;
- (id)tagViewShadowColor;
- (void)updateSeatNameLabelHiddenAndText;
- (void)onTapHeatValue;
- (void)configWithAnchorContact:(id)a0;
- (void)updateAnchorContact:(id)a0;
- (void)updateMicUserInfo:(id)a0 locationName:(id)a1 showLocation:(BOOL)a2;
- (void)updateAudioRoomScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
