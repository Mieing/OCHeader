@class NSString;

@interface IESLiveRTCPullStreamMonitorFragment : IESLiveRoomComponent <IESLiveSocialInteractAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didLeaveChannelWithLayout:(id)a0;

@end
