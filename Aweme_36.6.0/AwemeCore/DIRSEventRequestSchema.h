@class NSString, DIRSContext;

@interface DIRSEventRequestSchema : DIRSBasicModule <IRISServiceSchema, IRISModuleGlobal>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleDependencies;
+ (BOOL)isPlugin;
+ (id)sharedInstance;
+ (id)moduleVersion;

- (id)HTTPBodyPacker:(id)a0;
- (id)getLogID:(id)a0;
- (BOOL)resultWithResponse:(id)a0;
- (id)responseObjectWithData:(id)a0;
- (id)HTTPPath;
- (id)HTTPBody:(id)a0 options:(id)a1;
- (id)HTTPBody:(id)a0;
- (id)HTTPMethod;
- (unsigned long long)serviceType;

@end
