@class NSString;

@interface IESLiveGameOpenPlatformAudienceMessageProxy : IESLiveGameOpenPlatformMessageProxy <IESLiveMessageInteractionModuleCommentAction>

@property (nonatomic) unsigned long long selfCommentCountDuringPluginRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onCommentSucceed:(id)a0 fromEnterSource:(long long)a1;
- (id)initWithAppId:(id)a0 diContext:(id)a1;
- (unsigned long long)_readSelfCommentCountDuringPluginRunningFromLocalCache;
- (void)_writeSelfCommentCountDuringPluginRunnningToLocalCache:(unsigned long long)a0;
- (void)invoke_sendMessageToAnchor_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_getSelfCommentCountDuringPluginRunning_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_isFollowingAnchor_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_isFavoriteGame_withParams:(id)a0 callback:(id /* block */)a1;
- (void)invoke_addToFavorites_withParams:(id)a0 callback:(id /* block */)a1;

@end
