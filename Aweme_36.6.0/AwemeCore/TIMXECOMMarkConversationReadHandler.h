@class NSString, TIMXSDKInstance;

@interface TIMXECOMMarkConversationReadHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 convUnreadUnion:(id)a3 sendToServer:(BOOL)a4;
- (void)markConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 sendToServer:(BOOL)a3;
- (void)syncMarkConversationAsRead:(id)a0 tillPullIndex:(id)a1 tillBadgeCount:(id)a2 convUnreadUnion:(id)a3 sendToServer:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
