@class AWESharePanelCustomConfiguration;
@protocol AWEShareFunction;

@interface AWESharePanelFunctionSelectManager : NSObject

@property (retain, nonatomic) id<AWEShareFunction> function;
@property (retain, nonatomic) AWESharePanelCustomConfiguration *panelConfiguration;

+ (BOOL)fixTrackLabelEnable;
+ (id)sharedInstance;

- (void)dismissViewIfNeededWithCompletion:(id /* block */)a0;
- (void)didSelectFunction:(id)a0 panelConfiguration:(id)a1 completion:(id /* block */)a2;
- (void)doExtraOperationBeforeShare;
- (void)doShareOperationAfterFunctionExecuteOperationWithResult:(unsigned long long)a0 configuration:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)executeFunctionPreOperationWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)checkWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)doExtraOperationAfterShareWithShareResult:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
