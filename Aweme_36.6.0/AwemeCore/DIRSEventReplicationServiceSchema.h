@class DIRSValue, NSString, DIRSContext;

@interface DIRSEventReplicationServiceSchema : DIRSEventRequestSchema <IRISModule, IRISModuleGlobal, IRISServiceSchema, IRISConfigurationHandler>

@property (retain, nonatomic) DIRSValue *config;
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

- (BOOL)resultWithResponse:(id)a0;
- (id)responseObjectWithData:(id)a0;
- (void).cxx_destruct;

@end
