@class MMFinderLiveLiveRoleSignView, MMFinderLiveConnectMicUser, WCFinderHeadImageView, MMFinderLiveTaskId, UILabel, MMUIButton, MMFinderLiveGlobalRankSignView;
@protocol MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate;

@interface MMFinderLiveConnectMicBaseUserInfoView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) MMUIButton *micMutedButton;
@property (retain, nonatomic) MMFinderLiveGlobalRankSignView *globalRankSignView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *anonymousSignView;
@property (readonly, nonatomic) unsigned long long viewType;
@property (weak, nonatomic) id<MMFinderLiveConnectMicBaseUserInfoViewDelegate> actionDelegate;
@property (weak, nonatomic) id<WCFinderHeadImageViewDelegate> headImageViewDelegate;
@property (retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayNormalizedFrame;
@property (nonatomic) BOOL configureLiveDirtyHandle;
@property (nonatomic) BOOL disableHeadImageAutoUpdate;
@property (nonatomic) BOOL isHiddenSmallWidgets;

- (double)getHeadImageViewNormalizedCornerRadius;
- (void)show;
- (void)dealloc;
- (void)clearAndHide;
- (void)layoutUI;
- (void)updateHeadImageViewSize;
- (void)configHeadImageView;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (void)configNicknameLabel;
- (void)onConnectMicUserHasChanged;
- (void)createMicMutedButton;
- (void)onClickMicMutedButton;
- (void)configMicMutedButton;
- (void)updateMicMutedButtonAppearance;
- (void)updateMicMutedButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configGlobalRankSignView;
- (void)finderNicknameLabelDidClick;
- (BOOL)needDisplayGlobalRankSignView;
- (BOOL)needDisplayAnonymousSignView;
- (void)configAnonymousSignView;
- (unsigned int)getGlobalRank;
- (BOOL)updateConnectMicUserGlobalBadgeLevel:(unsigned int)a0;
- (void)updateSmallWidgetsHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
