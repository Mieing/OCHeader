@class NSString;
@protocol IESLiveInteractiveUserServiceMsgDispatcherDelegate;

@interface IESLiveInteractionLinkerUserServiceMsgDispatcher : NSObject <IESLiveInteractiveUserServiceMsgDispatcher, IESLiveInteractiveLinkServiceDelegate>

@property (weak, nonatomic) id<IESLiveInteractiveUserServiceMsgDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReceivedCreateMessage:(id)a0;
- (void)onReceivedCloseMessage:(id)a0;
- (void)onReceivedLinkedListChangeMessage:(id)a0;
- (void)onReceivedWatingListChangeMessage:(id)a0;
- (void)onReceivedLinkEnterMessage:(id)a0;
- (void)onReceivedLinkWatingListChangeMessage:(id)a0;
- (void)onReceivedLinkLeaveMessage:(id)a0;
- (void)onReceivedLinkUpdateUserMessage:(id)a0;
- (void)onReceivedCrossRoomUpdateMessage:(id)a0;
- (void).cxx_destruct;

@end
