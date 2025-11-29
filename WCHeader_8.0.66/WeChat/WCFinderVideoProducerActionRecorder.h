@class WCMomentsPickerActionRecorder, NSString, SightDraftItem, OMJMusicInfo, MJVideoTemplate, MJAnalyticsMovieSession, NSMutableDictionary;

@interface WCFinderVideoProducerActionRecorder : NSObject <NSCopying>

@property (nonatomic) long long scene;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *boundSessionId;
@property (retain, nonatomic) WCMomentsPickerActionRecorder *pickerActionRecorder;
@property (retain, nonatomic) NSString *videoProducerId;
@property (retain, nonatomic) MJAnalyticsMovieSession *recommendationAnalytics;
@property (retain, nonatomic) NSString *extInfoJson;
@property (nonatomic) BOOL isMJAppInstalled;
@property (retain, nonatomic) SightDraftItem *sightDraftItem;
@property (retain, nonatomic) MJVideoTemplate *exportedTemplate;
@property (retain, nonatomic) OMJMusicInfo *exportedMusic;
@property (nonatomic) double videoProducerStartTime;
@property (nonatomic) double videoProducerEndTime;
@property (retain, nonatomic) NSMutableDictionary *operationContextMap;
@property (readonly, nonatomic) unsigned int activityEventType;

+ (void)reportUserOperationWithSessionId:(id)a0 recorderList:(id)a1;
+ (id)_generateMediaDetailStrFromRecorderList:(id)a0;
+ (id)_generateEditDetailStrFromRecorderList:(id)a0;
+ (void)reportRecommendationWithRecorder:(id)a0;
+ (long long)_convertTemplateSourceFromMJVideotemplateSource:(long long)a0;
+ (long long)_convertTemplateSourceFromSourceType:(int)a0;
+ (long long)_convertMusicSourceFromSourceType:(int)a0;
+ (long long)_timeMSFromStart:(double)a0 toEnd:(double)a1;
+ (long long)_timeMSFromCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (long long)_validTimeMSFromTimeInterval:(double)a0;
+ (id)_safeJSONStringWithObject:(id)a0;
+ (id)_safeStringWithString:(id)a0;

- (long long)_getTemplatePlayCount;
- (long long)_getMusicPlayCount;
- (BOOL)_hasLaunchMJAppShowed;
- (long long)_getLastLaunchMJRegularChoice;
- (BOOL)_hasClickedLaunchMJApp;
- (long long)_getCreationScene;
- (long long)_getLaunchMJAppResult;
- (long long)_getExportTemplateSource;
- (long long)_getExportMusicSource;
- (id)_getExposeMusicIdListForTemplateId:(id)a0;
- (id)_getTemplateAnalyticsById:(id)a0;
- (id)_getTemplateSeqFromPreviewTemplateAnalytics:(id)a0;
- (id)_getMusicSeqFromPreviewMusicAnalyticsList:(id)a0;
- (id)_getMusicSearchActsForTemplateId:(id)a0;
- (unsigned long long)_getExtRecommendRequestIDForTemplateId:(id)a0;
- (id)_getTemplateEditDetailListFromTemplateOperation:(id)a0;
- (id)_getTemplateEditDetailFromEditSegmentOperation:(id)a0;
- (id)_genReportStrForExtInfo;
- (id)_genReportStrForEGDetailFromBelonger:(long long)a0;
- (id)_genReportStrForFinishAction;
- (id)_genReportStrForRecommendMediaDetail;
- (id)_genReportStrForTemplateEditDetail;
- (id)_genReportStrForReceivedTemplateIdList;
- (id)_genReportStrForExposeTemplateIdListFromBelonger:(long long)a0;
- (id)_genReportStrForAllPreviewTemplateSeq;
- (id)_genReportStrForPreviewTemplateSeqFromBelonger:(long long)a0;
- (id)initWithPickerActionRecorder:(id)a0;
- (void)videoProducerDidInit:(unsigned int)a0;
- (void)videoProducerDidStartWithId:(id)a0 forScene:(long long)a1 bindSessionId:(id)a2;
- (void)videoProducerDidStopWithResult:(BOOL)a0;
- (void)videoProducerDidTerminate;
- (void)videoProducerDidCheckMJAppInstallation:(BOOL)a0;
- (void)videoProducerDidAnalysisRecommendation:(id)a0;
- (void)videoProducerDidExport:(id)a0 byTemplate:(id)a1 music:(id)a2;
- (void)videoProducerDidPassExtInfoJson:(id)a0;
- (id)operationCtxFromBelonger:(long long)a0;
- (id)getAllProvidedTemplateList;
- (id)getAllShowedTemplateList;
- (id)getAllTemplateOperationList;
- (void).cxx_destruct;

@end
