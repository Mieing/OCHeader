@class NSString, DIRSContext;

@interface DIRSBDEncPlugin : DIRSBasicModule <IRISModuleGlobal, IRISDataCoder>

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
- (id)algorithm;

@end
