@class NSString;

@interface TingChatRoomPluginServiceListenerCpp : NSObject <TingChatRoomPluginServiceListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onJoinChatRoomSuccess:(id)a0;
- (void)onChatRoomFocusRequest;
- (void)onExitChatRoomSuccess;

@end
