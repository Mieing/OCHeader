@interface AWEShareAwemeStatsStage : AWEShareStatsStage

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;

- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void)statsWithEventContext:(id)a0;
- (void)trackAdShareEvent;
- (void)trackShareEventWithContext:(id)a0;
- (void)adapter_statsWithEventContext:(id)a0;
- (void)updateShareVideoEventBuilder:(id)a0;
- (id)init;

@end
