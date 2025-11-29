@class NSString;

@interface AWEAdPreloadComponentService : HTSService <AWEAdPreloadComponentService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dataReceived:(id)a0 context:(id)a1;
+ (void)preloadStart:(id)a0;
+ (void)preloadStart:(id)a0 context:(id)a1 extraData:(id)a2;
+ (void)preloadResult:(long long)a0 forComponent:(id)a1;
+ (void)preloadResult:(long long)a0 forComponent:(id)a1 extraData:(id)a2;
+ (void)preloadResult:(long long)a0 forComponent:(id)a1 context:(id)a2 extraData:(id)a3;
+ (void)showResult:(long long)a0 forComponent:(id)a1;
+ (void)showResult:(long long)a0 forComponent:(id)a1 onPhase:(id)a2;
+ (void)showResult:(long long)a0 forComponent:(id)a1 onPhase:(id)a2 extraData:(id)a3;
+ (void)showResult:(long long)a0 forComponent:(id)a1 onPhase:(id)a2 extraData:(id)a3 context:(id)a4;
+ (void)adtraceSelect:(id)a0 context:(id)a1;
+ (void)adtraceTryShow:(id)a0 context:(id)a1;
+ (void)adtraceTryShow:(id)a0 extraData:(id)a1 context:(id)a2;
+ (id)addCommonParamsToDict:(id)a0 component:(id)a1;
+ (void)calculateInfoForComponent:(id)a0 previousStage:(id)a1 currentStage:(id)a2 completion:(id /* block */)a3;
+ (BOOL)enabled;


@end
