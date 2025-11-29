@class NSString;

@interface IESLiveGameCPDataConnectionFragment : IESLiveRoomComponent <HTSLiveDiggAction, IESLiveMessageInteractionModuleCommentAction, HTSLiveRoomRemoteActions, IESLiveShareActions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDestroy;
- (void)willSendComment:(id)a0;
- (void)didCloseLiveRoomWithDuration:(double)a0;
- (void)sharePanelWillShow;
- (void)endContinueDigg;
- (void)triggerDataConnectionIfNeedWithAction:(unsigned long long)a0 extra:(id)a1;
- (BOOL)isGameDataConnectionRoom;

@end
