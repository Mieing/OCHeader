@class NSString, DIRSContext;

@interface DIRSEventUIDPlugin : DIRSBasicModule <IRISParameterHandler>

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
+ (id)moduleVersion;

- (id)exportFeatureParameters;
- (id)exportFeatureOptions;
- (void)commonInit;

@end
