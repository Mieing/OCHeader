@class UIView, NSString, WCFinderMoreLiveFriendLikeRecommendReasonView, WCFinderAuthInfoIconView, RichTextView, MMFinderLiveActivityView, UILabel, WCFinderHeadImageView;
@protocol WCFinderLiveHomePageBannerCellDelegate;

@interface WCFinderLiveHomePageBannerCell : WCFinderLiveFeedGenericCdnCell <WCFinderFeedContentVMLiveExt, ILinkEventExt, MMFinderLiveInfoMgrExt>

@property (retain, nonatomic) WCFinderMoreLiveFriendLikeRecommendReasonView *friendLikeReasonView;
@property (retain, nonatomic) RichTextView *recommendReasonLabel;
@property (retain, nonatomic) UIView *recommendReasonView;
@property (retain, nonatomic) RichTextView *descLabel;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) UIView *avatorContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *audienceNumLabel;
@property (nonatomic) BOOL hasRegisterNavLiveStatus;
@property (nonatomic) BOOL canShowLiveActivityView;
@property (retain, nonatomic) MMFinderLiveActivityView *liveActivityView;
@property (nonatomic) BOOL canShowDesLabel;
@property (weak, nonatomic) id<WCFinderLiveHomePageBannerCellDelegate> delegate;
@property (nonatomic) BOOL skipAsyncLoadLiveInfo;
@property (nonatomic) BOOL hideAudienceNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)dealloc;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)onFriendLikeClick;
- (void)updateHeadImage;
- (void)relayoutNickname;
- (void)willMoveToWindow:(id)a0;
- (void)registerFetchNavLiveStatus;
- (void)checkAndUnregisterFetchNavLiveStatus;
- (void)layoutUI;
- (id)getAudienceNumWordingWithDataItem:(id)a0;
- (void)onAuthorViewDidClick;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)layoutLiveActivityView;
- (void)updateAllUIElementsShow:(BOOL)a0 animate:(BOOL)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onFeedLiveOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void)onFeedLiveStatusChanged:(id)a0 state:(unsigned long long)a1;
- (void)onFeedLiveCoverInfoUpdate:(id)a0;
- (void)onFinderLiveHomePageStatusOnlineCountChange:(long long)a0 participantWording:(id)a1;
- (void)onLiveFriendLikeListUpdate;
- (void).cxx_destruct;

@end
