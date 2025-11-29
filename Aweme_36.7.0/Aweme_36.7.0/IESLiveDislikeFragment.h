@class HTSLiveToolbarItem, IESLivePreviewInteractionView, NSString;

@interface IESLiveDislikeFragment : IESLiveRoomComponent <IESLiveUserActions>

@property (retain, nonatomic) HTSLiveToolbarItem *dislikeToolbarItem;
@property (retain, nonatomic) IESLivePreviewInteractionView *interactionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentDestroy;
- (void)remoteRoomDataReady:(id)a0;
- (void)didFollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)didUnfollowUser:(id)a0 secUserID:(id)a1 status:(long long)a2;
- (void)registerLiveFollowStatusChangedSignal;
- (void)showPreviewDislikeButton;
- (void)showPreviewDislikeButton:(id)a0;
- (BOOL)dislikeInMoreToolEnabled;
- (void)addDislikeItemToMoreTools;
- (void)removeDislikeItemToMoreTools;
- (void)performDislikeAction;
- (void)dislikeWithSlideRoom;
- (void)dislikeWithoutSlideRoom;
- (void)dispatchDislikeActionIfNeeds;
- (void).cxx_destruct;

@end
