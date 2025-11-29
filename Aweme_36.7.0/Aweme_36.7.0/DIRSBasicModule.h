@class NSString, NSArray, DIRSContext;

@interface DIRSBasicModule : NSObject <IRISModule> {
    NSArray *_supportedParameterFileds;
}

@property (nonatomic) double tickTime;
@property (weak, nonatomic) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property BOOL isEnabled;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)description;
+ (long long)priority;
+ (BOOL)isPlugin;
+ (void)initialize;
+ (id)moduleVersion;

- (void)waitUtilDone;
- (id)supportedParameterKeys;
- (id)exportParameters:(id)a0;
- (void)onLaunch;
- (id)executionQueue;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)suspend;
- (id)init;
- (void)stop;
- (void)commonInit;
- (void)run;
- (void)resume;
- (id)parameterForKey:(id)a0;

@end
