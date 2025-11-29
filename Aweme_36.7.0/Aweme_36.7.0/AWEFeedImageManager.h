@class NSString;

@interface AWEFeedImageManager : NSObject <AWECustomWebImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCacheName;
+ (id)feedImageCacheConfig;
+ (void)updateCacheNameWithScene:(id)a0;
+ (id)getWebImageConfig;
+ (BOOL)enableCache;


@end
