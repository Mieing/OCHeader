@interface AWESharePOIForwardWechatChannel : AWEShareBaseChannel

- (void)shareWithCompletion:(id /* block */)a0;
- (BOOL)prepareToShare;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
