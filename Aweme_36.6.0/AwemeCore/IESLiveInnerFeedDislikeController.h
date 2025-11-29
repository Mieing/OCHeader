@class IESLiveInnerFeedContext, NSDictionary, NSString;
@protocol IESLiveDislikeService;

@interface IESLiveInnerFeedDislikeController : NSObject <IESLiveDislikeServiceDelegate, IESLiveLongPressActions, IESLiveDislikeActions, IESLiveInnerFeedDataControlAction, IESLiveUserFeedbackStatusActions, IESLiveInnerFeedDislikeService>

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) id<IESLiveDislikeService> dislikeService;
@property (copy, nonatomic) NSDictionary *currentRoomTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)onLiveRoomDeletedByLongPress:(id)a0;
- (void)onLongPressMenuWillPopupWithAllowConfig:(id)a0 trackContext:(id)a1;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (BOOL)isNeedLogin;
- (void)showLoginView:(id)a0;
- (void)showDislikeReasonPanel:(id)a0;
- (BOOL)dislikeService:(id)a0 canDislikeAt:(id)a1;
- (id)dislikeService:(id)a0 dislikeInfoAt:(id)a1;
- (void)dislikeService:(id)a0 didDeleteIndexPath:(id)a1;
- (void)performDislikeAction;
- (void)performAdDislikeAction:(id)a0;
- (void)performNegativeFeedbackActionWithID:(long long)a0;
- (void)setupDislikeService;
- (void)p_didClickDislike;
- (void)handleDislikeActionWithDict:(id)a0;
- (BOOL)p_alwaysThinkFirstRoomClick;
- (void)removeFeedbackCardWithCell:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dislike;

@end
