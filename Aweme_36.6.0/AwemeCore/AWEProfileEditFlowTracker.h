@interface AWEProfileEditFlowTracker : NSObject

+ (void)trackEditProfileEvent:(id)a0 context:(id)a1 extraParams:(id)a2;
+ (void)trackProfileFlowEventType:(id)a0 flowType:(id)a1 multiFlowType:(id)a2 context:(id)a3;
+ (id)enterMethodForScene:(long long)a0;

@end
