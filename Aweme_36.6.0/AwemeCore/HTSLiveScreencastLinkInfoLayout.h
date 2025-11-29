@class IESLiveScreencastLinkGuestInfoView, IESLiveRightBottomMutuallyExclusiveItem;

@interface HTSLiveScreencastLinkInfoLayout : NSObject

@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) IESLiveScreencastLinkGuestInfoView *infoView;
@property (nonatomic) double smallViewWidth;
@property (nonatomic) double smallViewHeight;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *screencastLinkItem;

- (void)componentOrientationChanged:(long long)a0;
- (void)didTapInfoView;
- (id)remoteAnchorInfo;
- (void)layoutAnchorInfoViewWithUser:(id)a0;
- (void)onClickMuteButton:(BOOL)a0;
- (id)remoteAnchorIDForAnchor;
- (id)initWithDiContext:(id)a0 isAnchor:(BOOL)a1;
- (void)showLinkInfoView;
- (void)dismissLinkInfoView;
- (void)updateAudienceLandscapeStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
