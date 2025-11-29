@class NSString;

@interface AWEECOMIMResourceCleanHelper : NSObject <AWEPerfResourceCleanStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHelper;

- (id)pigeonCachePath;
- (void)cleanPigeonCache;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;

@end
