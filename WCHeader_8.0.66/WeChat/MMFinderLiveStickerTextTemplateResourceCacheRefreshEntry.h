@class NSString;

@interface MMFinderLiveStickerTextTemplateResourceCacheRefreshEntry : NSObject

@property (retain, nonatomic) NSString *resourceMd5Hash;
@property (retain, nonatomic) NSString *extractedResourcePath;
@property (nonatomic) unsigned long long lastRefreshUnixEpochTimeInMilliseconds;

- (void).cxx_destruct;

@end
