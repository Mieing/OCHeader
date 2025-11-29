@interface AWEIMGroupShareChannel : AWEShareBaseChannel

- (id)shareImage;
- (long long)shareCategory;
- (id)trackingLabel;
- (BOOL)prepareToShare;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
