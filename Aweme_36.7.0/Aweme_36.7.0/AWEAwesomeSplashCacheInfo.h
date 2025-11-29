@class NSURL;

@interface AWEAwesomeSplashCacheInfo : NSObject

@property (nonatomic) BOOL hasCache;
@property (nonatomic) BOOL isComplete;
@property (retain, nonatomic) NSURL *cachePath;
@property (nonatomic) long long fileSize;

- (void).cxx_destruct;

@end
