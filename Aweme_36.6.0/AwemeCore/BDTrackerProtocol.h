@class NSString;

@interface BDTrackerProtocol : NSObject <TrackerAPI, TrackerAPI_Deprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)C2SSwizzle;
+ (void)eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (void)eventV3:(id)a0 params:(id)a1;
+ (Class)_getIMPL:(long long)a0;
+ (void)setIMPL:(long long)a0;
+ (long long)currentIMPLType;
+ (void)trackItemImpressionEvent:(id)a0;
+ (void)trackLogDataEvent:(id)a0;
+ (void)trackCustomKey:(id)a0 withEvent:(id)a1;
+ (void)lucky_eventV3:(id)a0 params:(id)a1;
+ (void)lucky_setup;
+ (void)C2SEventV3:(id)a0 params:(id)a1;
+ (void)C2SEventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (void)C2SEventData:(id)a0;
+ (void)C2SEventData:(id)a0 isV3Format:(BOOL)a1;
+ (void)C2SCheckEvent:(id)a0;
+ (void)C2SSwizzleTrigger;
+ (void)_aweLazyRegisterStaticLoad_C2SSwizzlePremain;
+ (void)ffm_eventV3:(id)a0 params:(id)a1;
+ (id)filterParams:(id)a0;
+ (void)_aweLazyRegisterStaticLoad_AWEFeatureManager;
+ (void)awetrack_hook_setupHooks;
+ (void)awetrack_eventV3:(id)a0 params:(id)a1;
+ (void)awe_eventV3:(id)a0 params:(id)a1;
+ (void)awetrack_eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (void)awetrack_setupHooks;
+ (void)awetrack_hook_eventV3:(id)a0 params:(id)a1;
+ (void)awetrack_hook_eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (void)iesfc_eventV3:(id)a0 params:(id)a1;
+ (void)iesfc_eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (void)pty_eventV3:(id)a0 params:(id)a1;
+ (void)pty_eventV3:(id)a0 params:(id)a1 isDoubleSending:(BOOL)a2;
+ (void)pty_trackCustomKey:(id)a0 withEvent:(id)a1;
+ (void)pty_trackItemImpressionEvent:(id)a0;
+ (void)pty_trackLogDataEvent:(id)a0;
+ (id)methodSignatureForSelector:(SEL)a0;
+ (void)initialize;
+ (void)forwardInvocation:(id)a0;


@end
