@interface AWEDCFeedImageContentPreloadConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enablePreloadImage;
@property (nonatomic) BOOL enableSecondImagePreload;
@property (nonatomic) double preloadDelayTime;

- (void)setupDefaultConfig;

@end
