@class NSString;

@interface MMTingCacheCleaner : NSObject <MMCacheCleaner>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCachePaths;
- (int)getDefaultCleanPolicy;

@end
