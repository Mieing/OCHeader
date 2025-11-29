@interface AWEShareUlikeChannel : AWEShareBaseChannel

+ (void)didLinkAction:(id)a0 enterFrom:(id)a1;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (long long)shareCategory;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (void)showSyncUlikeNotification:(BOOL)a0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
