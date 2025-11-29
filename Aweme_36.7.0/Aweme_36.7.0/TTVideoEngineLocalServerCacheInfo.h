@class NSString;

@interface TTVideoEngineLocalServerCacheInfo : NSObject

@property (nonatomic) long long mediaSize;
@property (nonatomic) long long cacheSizeFromZero;
@property (copy, nonatomic) NSString *localFilePath;

- (void).cxx_destruct;

@end
