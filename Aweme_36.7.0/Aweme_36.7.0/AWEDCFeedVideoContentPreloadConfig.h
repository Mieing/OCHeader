@class NSString;

@interface AWEDCFeedVideoContentPreloadConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enablePreloadVideo;
@property (nonatomic) long long preloadSize;
@property (copy, nonatomic) NSString *bussinessID;
@property (nonatomic) double preloadDelayTime;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
