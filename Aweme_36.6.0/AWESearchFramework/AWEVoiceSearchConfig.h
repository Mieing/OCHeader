@interface AWEVoiceSearchConfig : NSObject

+ (long long)pressInterval;
+ (BOOL)enablePenetrateHistoryWords;
+ (BOOL)enableSearchResultEntrance;
+ (BOOL)enableEntranceLottieOpt;
+ (long long)audioCacheDuration;
+ (BOOL)enablePreloadRecordResources;
+ (BOOL)newGuideWords;
+ (unsigned long long)voiceSearchMiddlePagePanelStyle;
+ (long long)prefetchStrategy;
+ (id)sugAvailableScope;
+ (BOOL)finishedSignalOptEnable;
+ (id)searchResultEntrancePanelStyle;
+ (BOOL)enableMiddlePanelHotspotOpt;
+ (BOOL)enableAdvanceStartRecord;
+ (BOOL)enable;
+ (id)config;

- (id)init;

@end
