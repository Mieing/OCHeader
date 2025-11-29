@class MMFinderLiveWatchRecommandData, MMFinderLiveAudienceReportContext;

@interface MMFinderLiveWatchContext : NSObject

@property (class, readonly, nonatomic) MMFinderLiveWatchContext *CurrentContext;

@property (retain, nonatomic) MMFinderLiveWatchRecommandData *recommandData;
@property (retain, nonatomic) MMFinderLiveAudienceReportContext *reportContext;

+ (void)CleanContext;

- (void)reinit;
- (void).cxx_destruct;

@end
