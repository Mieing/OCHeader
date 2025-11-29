@class UIImage, NSArray, NSMutableDictionary, UIImageView, MMFinderLiveConnectMicUsersInfo, UIView, NSMutableArray;

@interface MMFinderLiveCDNPlayerMicUserInfoView : UIView

@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *micUsersInfo;
@property (retain, nonatomic) NSArray *userInfoList;
@property (retain, nonatomic) NSMutableDictionary *userViewDic;
@property (retain, nonatomic) UIImageView *coverViewInMicMode;
@property (weak, nonatomic) UIView *videoContainerView;
@property (weak, nonatomic) UIView *micUserBackContainerView;
@property (nonatomic) struct CGSize { double width; double height; } lastViewSize;
@property (retain, nonatomic) NSMutableArray *unoccupiedSeatViewList;
@property (retain, nonatomic) NSMutableArray *cachedUnoccupiedSeatViewList;
@property (retain, nonatomic) UIImage *anchorCoverImage;
@property (nonatomic) BOOL anchorIsAudioMode;
@property (nonatomic) BOOL hideAudioMicUserAvatar;
@property (nonatomic) BOOL enableMasking;

- (void)layoutSubviews;
- (void)clearUserViewDicAndViews;
- (void)updateConnectMicUserViews;
- (void)layoutCoverViewInMicMode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getUserViewFrameWithUserInfo:(id)a0;
- (void)layoutUI;
- (void)checkAndCreateCoverViewInMicMode;
- (void)configureMicFocusCdnViewMasks;
- (void)layoutMaskLayerToCoverView:(id)a0;
- (void)showWithConnectMicUsersInfo:(id)a0;
- (void)updateUnoccupiedSeatViews;
- (void)clearCurrentUnoccupiedSeatViewList;
- (void)clearAndHide;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)a0;
- (void)updateVideoContainerView:(id)a0 andBackContainerView:(id)a1;
- (void)updateMicFocusModeAllAudioMicUserAvatarAlpha:(double)a0;
- (void).cxx_destruct;

@end
