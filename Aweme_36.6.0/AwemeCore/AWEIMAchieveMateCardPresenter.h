@class AWEIMUIImageViewPresenter, AWEIMTwoAvatarClashViewPresenter, AWEIMMaskUIViewPresenter, AWEIMYYLabelPresenter, AWEIMAchieveMateStickerViewPresenter, AWEIMUIViewPresenter;

@interface AWEIMAchieveMateCardPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIViewPresenter *avatarBox;
@property (retain, nonatomic) AWEIMTwoAvatarClashViewPresenter *clashPresenter;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *leftAvatar;
@property (retain, nonatomic) AWEIMMaskUIViewPresenter *rightAvatarBGView;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *rightAvatar;
@property (retain, nonatomic) AWEIMYYLabelPresenter *nameLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *nameBox;
@property (retain, nonatomic) AWEIMYYLabelPresenter *introLabel;
@property (retain, nonatomic) AWEIMUIViewPresenter *introBox;
@property (retain, nonatomic) AWEIMUIViewPresenter *separatorLineView;
@property (retain, nonatomic) AWEIMYYLabelPresenter *stickerTitle;
@property (retain, nonatomic) AWEIMAchieveMateStickerViewPresenter *stickerView;

- (BOOL)useNewStyle;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)trackFriendIMNotiecActionType:(id)a0;
- (void)showAvatarWithoutAnimation;
- (void)playClashAnimation;
- (void)configSubPresentersWithContext:(id)a0;
- (void)updateSubpresenterProps;
- (void)updatePeerUserAvatarWithContext:(id)a0;
- (void)updateCurrentUserAvatar;
- (void)updateAvatarProps:(id)a0 avatarURLArr:(id)a1;
- (id)getAttrTitleStr;
- (id)getAttrsubtitleStr;
- (id)getStickerTitleStr;
- (id)getRightAvatarShapePath;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)hasStickers;

@end
