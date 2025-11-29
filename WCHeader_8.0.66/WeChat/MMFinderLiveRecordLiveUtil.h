@interface MMFinderLiveRecordLiveUtil : NSObject

+ (void)getFilteredGameUserInfoWithAppId:(id)a0 finderLiveTask:(id)a1 filteredGameCompleteBlock:(id /* block */)a2;
+ (void)getFilteredGameUserInfoWithAppId:(id)a0 finderLiveTask:(id)a1 liveViewController:(id)a2;
+ (void)launchGameApp:(id)a0;
+ (id /* block */)launchGameAppCallbackHandler:(id)a0;
+ (BOOL)canDownloadGameOnAppstore:(id)a0;
+ (void)showTipsForNeedDownloadGame:(id)a0;
+ (void)reportRecordLiveWithType:(unsigned long long)a0;

@end
