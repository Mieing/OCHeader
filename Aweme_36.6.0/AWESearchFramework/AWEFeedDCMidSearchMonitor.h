@interface AWEFeedDCMidSearchMonitor : NSObject

@property (nonatomic) long long containerInitStartTime;
@property (nonatomic) long long requestGuessListTime;
@property (nonatomic) long long responseGuessListTime;
@property (nonatomic) long long getGuessListEndTime;
@property (nonatomic) long long guessListRenderStartTime;
@property (nonatomic) long long guessListRenderEndTime;
@property (nonatomic) long long guessListFirstImageLoadStartTime;
@property (nonatomic) long long guessListFirstImageLoadEndTime;
@property (nonatomic) unsigned long long pageState;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) id /* block */ searchDCFeedMonitorBlock;

+ (id)sharedInstance;

- (void)trackFMPIfNeeded;
- (void)markDCContainerInitIfNeeded;
- (void)resetRequestTimeIfNeeded;
- (void)markRequestGuessListIfNeeded;
- (void)markRequestGuessListIfNeeded:(double)a0;
- (void)markRequestType:(long long)a0;
- (void)markResponseGuessListIfNeeded;
- (void)markDCPageFetchedDataIfNeeded;
- (void)markDCPageRenderStartIfNeeded;
- (void)markDCPageFirstImageLoadStartIfNeeded;
- (void)markDCPageRenderEndIfNeeded;
- (void)markDCPageFirstImageLoadEndIfNeeded;
- (void)resetAll;
- (void).cxx_destruct;

@end
