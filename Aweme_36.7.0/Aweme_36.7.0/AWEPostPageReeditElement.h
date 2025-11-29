@interface AWEPostPageReeditElement : AWEPostPageElement

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)onNetworkChanged:(id)a0;
- (long long)anchorListRequestItemType;
- (id)anchorParamsFromPublishModel:(id)a0;
- (void)contextDidReady;
- (void)replaceMusicFinished:(id)a0;
- (void)fetchPublishAnchorListData;
- (id)service;
- (id)privacy;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
