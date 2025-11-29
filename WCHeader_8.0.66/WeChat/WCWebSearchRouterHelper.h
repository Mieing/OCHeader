@interface WCWebSearchRouterHelper : NSObject

+ (void)PushVideoFlowVCWithVideoInfo:(id)a0 initedParams:(id)a1 curNavController:(id)a2;
+ (void)PushVideoFlowVCWithVideoInfo:(id)a0 webSearchMgr:(id)a1 initedParam:(id)a2 srcSNSItem:(id)a3 srsMsgWrap:(id)a4 curNavController:(id)a5;
+ (void)StartTextSearch:(id)a0 curViewController:(id)a1;
+ (void)__startTextSearch:(id)a0 curViewController:(id)a1;
+ (void)StartImageSearchWithSearchEntity:(id)a0 curViewController:(id)a1;
+ (void)__startImageSearchWithSearchEntity:(id)a0 curViewController:(id)a1;
+ (id)StartWeAppSearchWithScene:(unsigned long long)a0 curViewController:(id)a1;
+ (id)StartWeAppSearchWithScene:(unsigned long long)a0 curViewController:(id)a1 completion:(id /* block */)a2;
+ (id)StartWeAppSearchWithScene:(unsigned long long)a0 curViewController:(id)a1 withMusicEntries:(BOOL)a2 extendParam:(id)a3 completion:(id /* block */)a4;
+ (id)GenNewWeAppSearchPageWithScene:(unsigned long long)a0 withMusicEntries:(BOOL)a1 extendParam:(id)a2;
+ (BOOL)isXDevice;
+ (id)GenNewWeAppSearchPage:(id)a0;
+ (void)LaunchSearchDetailPage:(id)a0 curViewController:(id)a1;
+ (BOOL)MainSwitchOn;
+ (BOOL)ImageSearchEntryOn;
+ (BOOL)TextSearchEntryOn;
+ (BOOL)TopicSearchEntryOn;
+ (BOOL)FTSWebSearchEntryOn;

@end
