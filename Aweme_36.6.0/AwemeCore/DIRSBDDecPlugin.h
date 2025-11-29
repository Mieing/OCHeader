@class NSString, DIRSContext;

@interface DIRSBDDecPlugin : DIRSBasicModule <IRISModuleGlobal, IRISDataCoder> {
    NSString *key;
    NSString *iv;
}

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

- (id)requiredParameters;
- (id)decodedData:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)algorithm;
- (void)commonInit;

@end
