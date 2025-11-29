@class NSMutableDictionary;

@interface BDPWKGameMemoryMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitors;

+ (id)sharedMonitor;

- (void)startMemSamplerWithPool:(id)a0 uniqueID:(id)a1 routeID:(id)a2;
- (void)stopMemSamplerWithRouteID:(id)a0;
- (id)memoryInfoWithRouteID:(id)a0;
- (void)readWkMemoryFileWithWrapper:(id)a0 uniqueID:(id)a1;
- (void)clearSampleFiles;
- (void)deleteFileWithName:(id)a0 inPath:(id)a1;
- (void).cxx_destruct;

@end
