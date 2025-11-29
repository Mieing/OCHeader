@class NSString, DIRSContext;

@interface DIRSRemoteSettingsSchema : DIRSBasicModule <IRISServiceSchema, IRISModuleGlobal>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)sharedInstance;
+ (id)moduleVersion;

- (id)getLogID:(id)a0;
- (BOOL)resultWithResponse:(id)a0;
- (id)responseObjectWithData:(id)a0;
- (id)HTTPPath;
- (id)HTTPBody:(id)a0 options:(id)a1;
- (id)HTTPMethod;
- (unsigned long long)serviceType;

@end
