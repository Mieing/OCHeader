@interface AWEIMMessageTabLeftContactsClientChatListComponent : AWEIMMessageTabCustomDataBaseListComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)createDataController;
- (long long)currentWrapperType;
- (id)titleTextInEmptyPage;
- (id)infomativeTextInEmptyPage;
- (BOOL)hideUnreadDot;
- (BOOL)enableShowChildViewController;
- (id)viewControllerIdentify;
- (BOOL)canShowHeaderInCurrentViewController;
- (void)setupIndicatorModel:(id)a0;
- (long long)entryType;
- (long long)unreadCount;
- (id)title;
- (long long)indicatorType;
- (id)trackName;

@end
