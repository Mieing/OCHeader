@interface AWELivePaywallPosterChannel : AWEShareBaseChannel

+ (void)regsiterShareChannel;

- (id)shareImage;
- (BOOL)prepareToShare;
- (void)trackClick:(id)a0 jumpToPosterShare:(BOOL)a1;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
