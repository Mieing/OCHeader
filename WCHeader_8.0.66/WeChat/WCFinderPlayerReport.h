@class NSString, NSMutableDictionary, NSMutableSet, WCFinderPlayBufferingInfo, NSMutableArray;

@interface WCFinderPlayerReport : WCPlayerReporter

@property (nonatomic) BOOL hasRecordPrecreate;
@property (nonatomic) BOOL isDownloadFinishBeforPlay;
@property (nonatomic) unsigned long long completedSizeBeforePlay;
@property (nonatomic) BOOL hasFinderDataReported;
@property (retain, nonatomic) WCFinderPlayBufferingInfo *bufferingInfo;
@property (retain, nonatomic) NSMutableArray *bufferingInfoArray;
@property (nonatomic) unsigned long long hasDownloadSize;
@property (nonatomic) BOOL downloadSuccessful;
@property (nonatomic) BOOL isDownloadH265;
@property (nonatomic) BOOL isDownloadH266;
@property (nonatomic) BOOL isSeek;
@property (nonatomic) BOOL isPause;
@property (copy, nonatomic) NSString *tid;
@property (retain, nonatomic) NSMutableSet *secondSet;
@property (retain, nonatomic) NSMutableDictionary *secondBufferDict;
@property (retain, nonatomic) NSMutableSet *timeIntervalSet;
@property (retain, nonatomic) NSMutableDictionary *networkStatusDict;
@property (nonatomic) BOOL isPlayUnifiedURL;
@property (nonatomic) unsigned long long loopCount;

- (void)resetReportFlag;
- (void)customReport;
- (void)cachePrecreateData;
- (void)updatePrecreateLoadInfo;
- (id)finderMediaWrap;
- (id)getReportInfo;
- (id)getAllBufferEvent;
- (id)getWaitDetailJson;
- (id)getAPMInfoStr;
- (id)getReportJsonFormatStringWithDictionary:(id)a0;
- (id)getJsonFormatStringWithDictionary:(id)a0;
- (id)replaceCommaToSemicolon:(id)a0;
- (long long)getPreloadFileSize;
- (id)secondSetString;
- (id)secondBufferString;
- (unsigned long long)getFirstLoadTime;
- (int)getPreCreateExperienceCost;
- (void)startLoading;
- (void)endLoading;
- (void)reportBuffering;
- (void).cxx_destruct;

@end
