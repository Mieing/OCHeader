@class NSString;

@interface AWEProfileImageManager : NSObject <AWECustomWebImageProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCacheName;
+ (void)updateCacheNameWithScene:(id)a0;
+ (id)getWebImageConfig;
+ (id)profileImageCacheConfig;
+ (BOOL)enableCache;


@end
