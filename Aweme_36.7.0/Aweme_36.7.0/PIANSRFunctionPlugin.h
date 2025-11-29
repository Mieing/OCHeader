@class NSString;

@interface PIANSRFunctionPlugin : NSObject <PIAFunctionPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executeAfterPrepareTask;
+ (unsigned long long)pluginMode;
+ (void)addNSRHitPVEvent:(long long)a0 engine:(id)a1;
+ (void)addNSREnabledPVEvent:(BOOL)a0 engine:(id)a1;

@end
