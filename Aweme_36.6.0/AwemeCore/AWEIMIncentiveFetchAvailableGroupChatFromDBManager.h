@interface AWEIMIncentiveFetchAvailableGroupChatFromDBManager : NSObject

+ (id)chatDataManager;
+ (void)p_fillAvailableGroupChatWithCons:(id)a0 scanDBConfig:(id)a1;
+ (void)scanFinishWithScanDBConfig:(id)a0;
+ (BOOL)isValidWithConversation:(id)a0;

- (void)getAvailableGroupChatFromDBWithScanFinishCompletion:(id /* block */)a0 appendCompletion:(id /* block */)a1;
- (void)fetchAvailableGroupChatFromDBWithCompletion:(id /* block */)a0 appendCompletion:(id /* block */)a1 scanDBConfig:(id)a2;
- (id)init;

@end
