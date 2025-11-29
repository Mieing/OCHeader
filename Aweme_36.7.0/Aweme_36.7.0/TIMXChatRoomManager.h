@class TIMXThreadSafeMutableDictionary, NSString, TIMXSDKInstance;

@interface TIMXChatRoomManager : NSObject <TIMXChatRoomManagerProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXThreadSafeMutableDictionary *sharedConversationDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addConversationWithIdentifier:(id)a0;
- (void)removeConversationWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)conversationWithIdentifier:(id)a0;
- (id)initWithRootObject:(id)a0;

@end
