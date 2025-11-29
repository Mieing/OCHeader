@class AWESECUniTrackItem, NSString, NSArray, NSURL, AWESECAppJumpArbiterResult, SECEventFlowSceneDetectAggrResult, NSDictionary, AWESECTrackItem, AWESECAppJumpPipelineResult, AWESECAppJumpSecLinkCheckResult;

@interface AWESECAppJumpOutEvent : NSObject <NSCoding, SECBaseEvent>

@property (copy, nonatomic) NSString *source;
@property (nonatomic) unsigned long long riskLevel;
@property (copy, nonatomic) NSDictionary *eventInfo;
@property (copy, nonatomic) NSDictionary *customInfo;
@property (copy, nonatomic) NSString *entryToken;
@property (copy, nonatomic) NSString *certToken;
@property (copy, nonatomic) NSString *hybridPageID;
@property (copy, nonatomic) NSString *hybridPageType;
@property (copy, nonatomic) NSString *webViewClass;
@property (copy, nonatomic) NSString *containerClass;
@property (copy, nonatomic) NSString *hybridTag;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *sqr_id;
@property (copy, nonatomic) NSDictionary *customTrack;
@property (copy, nonatomic) NSString *UGCertID;
@property (copy, nonatomic) NSString *UGPositionCertID;
@property (copy, nonatomic) NSString *searchTokenType;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) AWESECAppJumpPipelineResult *pipelineResult;
@property (retain, nonatomic) AWESECAppJumpSecLinkCheckResult *secLinkCheckResult;
@property (retain, nonatomic) AWESECAppJumpArbiterResult *arbiterResult;
@property (nonatomic) BOOL isUploadToAppLog;
@property (nonatomic) BOOL isUploadToUserException;
@property (copy, nonatomic) NSArray *backtraces;
@property (copy, nonatomic) NSString *backtracesLog;
@property (copy, nonatomic) NSString *popupTopVCName;
@property (copy, nonatomic) NSString *popupAction;
@property (copy, nonatomic) NSString *popupCancelMode;
@property (retain) SECEventFlowSceneDetectAggrResult *eventFlowAggrResult;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (retain, nonatomic) AWESECUniTrackItem *trackItem;
@property (retain, nonatomic) AWESECTrackItem *perfTrackItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendSceneDetectInfoToEventInfoAndTrackItem;
- (id)paramsForFilter;
- (id)mergeCustomTrackWithDict:(id)a0;
- (void)appendPopupInfoToEventInfoAndTrackItem;
- (void)eventStart;
- (void)setupBPEAInfo;
- (void)setupPerfTrackItem;
- (void)eventEnd;
- (void)setupBackTrace;
- (void)setupEventInfo;
- (void)setupTrackItem;
- (BOOL)shouldDetectAllScene;
- (void)appendSecLinkInfoToEventInfoAndTrackItem;
- (id)customTrackDurationFilter:(id)a0;
- (void)appendInfoToEventInfo:(id)a0;
- (void)appendInfoToTrackItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)eventType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;

@end
