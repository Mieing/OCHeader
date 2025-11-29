@class DIRSEventSamplingSubject, NSArray, DIRSValue, NSString, DIRSConcurrentCollection, DIRSContext;

@interface DIRSEventSamplingPlugin : DIRSBasicModule <IRISModule, IRISEventProcedureHandler, IRISConfigurationObserver, IRISParameterHandler, IRISIdentifierObserver>

@property (nonatomic) long long configVersion;
@property (retain) DIRSValue *config;
@property (retain, nonatomic) NSArray *samplingUnits;
@property (retain, nonatomic) DIRSConcurrentCollection *presamplingUnits;
@property (retain, nonatomic) DIRSEventSamplingSubject *subject;
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
+ (id)moduleVersion;

@end
