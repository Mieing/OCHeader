@interface AWEShareTrackUtil : NSObject

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (void)trackShareAwemeWithFunction:(id)a0;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;
+ (void)statsNewShareWithFunction:(id)a0;
+ (id)generateEventContextWithFunction:(id)a0;
+ (void)trackAdShareEventWithFunction:(id)a0;
+ (void)trackShareEventWithContext:(id)a0 function:(id)a1;
+ (void)adapter_statsWithEventContext:(id)a0 function:(id)a1;
+ (BOOL)shouldStatsNewShareWithFunction:(id)a0;
+ (void)updateShareVideoEventBuilder:(id)a0 function:(id)a1;
+ (void)trackShareFunction:(id)a0 withEvent:(id)a1 keyForItemID:(id)a2;
+ (void)statsWithEventContext:(id)a0 function:(id)a1;

- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEShareServiceDOUYINLiteAdaper;

@end
