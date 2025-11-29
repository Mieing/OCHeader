@class NSString, DIRSContext;

@interface DIRSCompressionGzipPlugin : DIRSBasicModule <IRISModuleGlobal, IRISDataCoder>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)sharedInstance;
+ (id)moduleVersion;

- (id)requiredHTTPHeaderFields;
- (id)encodedData:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_dataCompressionUsingGzip:(id)a0 level:(int)a1 windowSize:(int)a2 memoryLevel:(int)a3 strategy:(int)a4 error:(id *)a5;
- (id)algorithm;

@end
