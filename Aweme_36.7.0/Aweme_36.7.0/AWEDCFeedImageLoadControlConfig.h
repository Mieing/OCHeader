@interface AWEDCFeedImageLoadControlConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enablePreloadImageControl;
@property (nonatomic) long long preloadImageControlMaxConcurrent;
@property (nonatomic) BOOL enableAvatarLoadControl;

- (void)setupDefaultConfig;

@end
