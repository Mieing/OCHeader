@class AWERVDetailPageContext;

@interface AWERVContainerTracker : NSObject

@property (weak, nonatomic) AWERVDetailPageContext *context;
@property (nonatomic) BOOL hasTrackedPageShow;

+ (id)trackParamsForMVChannelWithModel:(id)a0 logExtraDict:(id)a1;

- (void)trackSearchButtonShow;
- (void)trackDataForEnterPrivateChatWithPeerUserID:(id)a0;
- (void)trackDataForEnterGroupChatWithCID:(id)a0;
- (void)trackEnterUserProfileWithEnterMethod:(id)a0;
- (void)trackPageShowIfNeeded;
- (void)trackClickLandscapeModeEntrance:(BOOL)a0;
- (void)trackStayTime:(double)a0 logExtraDict:(id)a1;
- (void)trackForFullScreenEntranceClick;
- (void)trackForQuitRelatedVideoWithType:(id)a0;
- (void)trackSearchButtonClick;
- (void)trackVideoScroll:(BOOL)a0;
- (void)trackShowFullScreenEntrance;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
