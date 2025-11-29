@class NSString;

@interface AWEFriendStateDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEFriendStateDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_write:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishTapTAIsFriendWithUser:(id)a0 isFriend:(BOOL)a1;
- (id)readFromMemory:(id)a0;
- (BOOL)isFriend:(id)a0 scene:(id)a1;
- (void)p_didChangeFriendStatus:(id)a0 isFriend:(BOOL)a1;
- (id)init;
- (id)identifier;
- (void)dealloc;
- (void)write:(id)a0 completion:(id /* block */)a1;

@end
