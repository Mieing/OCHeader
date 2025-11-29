@interface AWEShareSearchLandingPageReadModeChannel : AWEShareBaseChannel

@property (nonatomic) BOOL hasClick;

- (id)shareImage;
- (BOOL)transcodingEnabled;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;

@end
