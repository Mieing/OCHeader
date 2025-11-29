@interface AWEECOMIMFloatChatListBiz : AWEECOMIMChatListBiz

@property BOOL isFullPage;

- (void)fetchIMTopNotifyInfoWithCompletion:(id /* block */)a0;
- (void)createTopNotifyDataSource;

@end
