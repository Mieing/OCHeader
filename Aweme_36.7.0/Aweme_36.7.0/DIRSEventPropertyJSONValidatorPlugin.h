@class NSString, DIRSContext;

@interface DIRSEventPropertyJSONValidatorPlugin : DIRSBasicModule <IRISModule, IRISEventProcedureHandler>

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)invalidEventTypes;
+ (long long)priority;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (BOOL)handleProcedure:(id)a0 withError:(id *)a1;
- (id)invalidPropertyError;
- (void)commonInit;

@end
