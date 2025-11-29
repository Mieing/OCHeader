@class NSString;

@interface AWERegionServiceImpl : NSObject <AWERegionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getCurrentRegion;
- (BOOL)isCurrentRegionInRegions:(id)a0;
- (BOOL)isCurrentRegionEqualToRegion:(id)a0;

@end
