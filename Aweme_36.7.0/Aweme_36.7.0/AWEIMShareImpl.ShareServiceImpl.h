@interface AWEIMShareImpl.ShareServiceImpl : HTSService <AWEIMShareService>

- (id)additionTextViewWithUIConfig:(id)a0;
- (id)sendMessageWithRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableWithScene:(long long)a0;
- (BOOL)enableWithScene:(long long)a0 enterFrom:(id)a1;
- (id)createContactListWithConfig:(id)a0 delegate:(id)a1;
- (id)trackIDGeneratorWithShareContext:(id)a0 shareImpl:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
