@interface AWEShareSaveImageChannel : AWEShareBaseChannel

@property (nonatomic) long long shareCategory;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (id)trackingLabel;
- (id)init;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;

@end
