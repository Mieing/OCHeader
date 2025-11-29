@class NSNumber;

@interface AWEListPreloadConfig : NSObject

@property (retain, nonatomic) NSNumber *displayPercent;
@property (retain, nonatomic) NSNumber *preloadSize;
@property (nonatomic) BOOL banPreload;
@property (nonatomic) BOOL wifiOnly;
@property (nonatomic) BOOL startWhenScrollToTop;

- (void).cxx_destruct;
- (id)defaultConfig;

@end
