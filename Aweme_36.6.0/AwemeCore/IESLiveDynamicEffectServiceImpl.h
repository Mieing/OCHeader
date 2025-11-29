@class NSString;

@interface IESLiveDynamicEffectServiceImpl : NSObject <IESLiveDynamicEffectService>

@property (copy, nonatomic) id /* block */ setEffectCompletion;
@property (copy, nonatomic) id /* block */ effectMessageDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)effectConfigured;
- (BOOL)sendGiftEffectMessageWithParam2:(long long)a0 param3:(id)a1;
- (BOOL)sendGiftEffectMessageWithParam1:(long long)a0 param2:(long long)a1 param3:(id)a2;
- (void)setEffectEnable:(BOOL)a0 effectMessageDispatcher:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)effectEnable;
- (void).cxx_destruct;

@end
