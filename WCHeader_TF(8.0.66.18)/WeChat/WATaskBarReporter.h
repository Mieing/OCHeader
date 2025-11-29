@interface WATaskBarReporter : NSObject

+ (void)reportWATaskBarAppear:(id)a0;
+ (void)reportWATaskBarClose:(id)a0;
+ (void)reportWATaskBarFeedAppear:(id)a0;
+ (void)reportWATaskBarClick:(id)a0;
+ (void)reportWATaskBarFeedAddDelete:(id)a0;
+ (void)reportWATaskBarUserGuide:(id)a0;
+ (unsigned long long)bizNameToItemType:(id)a0;
+ (id)getTaskBizKeyFromWeApp:(id)a0 debugType:(unsigned int)a1;

@end
