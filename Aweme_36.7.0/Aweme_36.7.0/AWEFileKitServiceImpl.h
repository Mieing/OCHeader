@class NSString;

@interface AWEFileKitServiceImpl : NSObject <AWEFileKitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)resourceMetricWithRootPath:(id)a0 businessLine:(id)a1 traceLevel:(unsigned long long)a2;
- (id)resourceMetricWithRootPath:(id)a0 businessLine:(id)a1 traceLevel:(unsigned long long)a2 enableDefaultMetric:(BOOL)a3;
- (id)filekitManager;

@end
