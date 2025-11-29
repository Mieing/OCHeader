@interface AWEMessageReachPopViewTriggersVerifyHelper : NSObject

+ (void)popViewTriggerWithPriority:(id)a0 event:(id)a1 completion:(id /* block */)a2;
+ (id)getVerifiedTriggerSourceWithForceAlert:(id)a0 eventItem:(id)a1 ctags:(id)a2;
+ (id)getVerifiedTriggerSourceWithContext:(id)a0 ctags:(id)a1;
+ (id)getTriggerSourceNameWithContext:(id)a0;
+ (id)popViewLegalEventToTriggerSourceMap;
+ (id)getTriggerSourceNameWithEventID:(id)a0;
+ (id)popViewTriggerSourceSet;
+ (BOOL)isPopViewSourceAvailable:(id)a0;

@end
