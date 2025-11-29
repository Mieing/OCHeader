@class NSString, TIMXSDKInstance;

@interface TIMXUserManager : NSObject <TIMXUserManagerProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchUserInfoInInbox:(int)a0 userID:(long long)a1 complete:(id /* block */)a2;
- (void)modifyUsers:(id)a0 toBlockList:(BOOL)a1 inbox:(int)a2 completion:(id /* block */)a3;
- (void)modifyUsers:(id)a0 toBlockList:(BOOL)a1 inbox:(int)a2 blockType:(BOOL)a3 conversationID:(id)a4 conversationShortID:(long long)a5 conversationType:(unsigned long long)a6 completion:(id /* block */)a7;
- (void)fetchUserBlockStatusInInbox:(int)a0 userID:(long long)a1 completion:(id /* block */)a2;
- (void)fetchUserBlockStatusInInbox:(int)a0 userID:(long long)a1 blockType:(BOOL)a2 conversationID:(id)a3 conversationShortID:(long long)a4 conversationType:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)fetchBlockListUsersInInbox:(int)a0 cursor:(long long)a1 limit:(int)a2 completion:(id /* block */)a3;
- (void)fetchBlockListUsersInInbox:(int)a0 cursor:(long long)a1 limit:(int)a2 blockType:(BOOL)a3 conversationID:(id)a4 conversationShortID:(long long)a5 conversationType:(unsigned long long)a6 completion:(id /* block */)a7;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
