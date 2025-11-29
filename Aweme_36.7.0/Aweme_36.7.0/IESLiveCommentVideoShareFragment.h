@class UIViewController, NSMutableDictionary, IESLiveVideoShareSelectView, NSString, IESLiveCommentVideoShareApi, NSMutableArray;

@interface IESLiveCommentVideoShareFragment : IESLiveRoomComponent <IESLiveCommentVideoShareService, HTSLiveMessageSubscriber, IESLiveSocialInteractAction, IESLiveCommentVideoShareRouter, IESLiveMessageInteractionModuleCommentAction>

@property (retain, nonatomic) NSMutableDictionary *tabVideoListMap;
@property (retain, nonatomic) NSMutableDictionary *tabMaxCursorMap;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) IESLiveCommentVideoShareApi *api;
@property (nonatomic) BOOL isRoomEnableVideoShare;
@property (nonatomic) BOOL isVideoShareAuthOn;
@property (nonatomic) BOOL couldRequestVideo;
@property (weak, nonatomic) UIViewController *curVideoPlayVC;
@property (retain, nonatomic) IESLiveVideoShareSelectView *selectView;
@property (nonatomic) int defaultTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isVideoPlaying;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)willLeaveChannelWithLayout:(id)a0;
- (BOOL)isSelfGuest;
- (id)currentUserType;
- (void)playVideoWithItemID:(id)a0 trackParams:(id)a1;
- (void)addActionSheetItem;
- (BOOL)enableCommentVideoShare;
- (id)videoShareSelectView;
- (void)removeCurrentVideoPlayViewControllerIfNeed;
- (void)resetAllVideoListData;
- (BOOL)isVideoListEmptyForTab:(id)a0;
- (id)videoTabList;
- (id)videoListForTab:(id)a0;
- (void)loadVideoListForTab:(id)a0 isFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendVideoWithVideo:(id)a0 tabType:(long long)a1 needToMoc:(BOOL)a2 needToPin:(BOOL)a3 trackExtra:(id)a4;
- (void)sendVideoWithVideoTab:(id)a0 indexInList:(long long)a1 needToMoc:(BOOL)a2;
- (void)sendVideoWithVideoTab:(id)a0 indexInList:(long long)a1 needToMoc:(BOOL)a2 needToPin:(BOOL)a3;
- (void)cleanVideoData;
- (void)loadVideoTabListIfNeed;
- (void)addViewVideoPSActionSheetItem;
- (void)loadVideoShareCommentItem;
- (BOOL)isCurrentSceneEnable;
- (void)setupTabMaxCursorMap;
- (void)setupTabVideoListMap;
- (void)mocCommentMessageWithResponse:(id)a0;
- (void)pinVideoWithResponse:(id)a0;
- (void)keyboardWillHide;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
