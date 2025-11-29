@class NSString, NSCondition;

@interface AWEInfraResourceCleanPlugin : NSObject <AWEPerfResourceCleanStrategy>

@property (retain, nonatomic) NSCondition *cleanCondition;
@property (copy, nonatomic) NSString *liveMetaPath;
@property (copy, nonatomic) NSString *ttnetPath;
@property (copy, nonatomic) NSString *heimdallrPath;
@property (copy, nonatomic) NSString *pitayaPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (BOOL)useAllocatedDiskSize;
- (double)liveMetaSize;
- (double)cleanSizeInRadical;
- (void)cleanInfraResourceAuto;
- (void)cleanInfraResourceRadical;
- (void)cleanInfraResourceExtremely;
- (void)cleanLiveMeta;
- (void)cleanTTNetCache;
- (void)cleanVideoCache;
- (void)cleanImageCache;
- (BOOL)fixedCleanUpRange;
- (void)cleanResourceAtPath:(id)a0 whiteList:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
