@class NSString;

@interface IESLiveAnchorPopupAlertFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)handlePopupMessage:(id)a0;
- (void)messageReceived:(id)a0;

@end
