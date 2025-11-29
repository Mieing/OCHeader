@class NSMutableDictionary, NSString, NSMutableSet, WCFinderStreamProfileViewModel, NSMutableArray, WCFinderLiveAudienceNoticeReporter;

@interface WCFinderProfileReporter : NSObject

@property (retain, nonatomic) NSMutableSet *reportedElements;
@property (retain, nonatomic) NSMutableDictionary *elementReportAction;
@property (retain, nonatomic) NSMutableSet *exposedMiniAppIds;
@property (retain, nonatomic) NSMutableArray *atExposeMentionNames;
@property (nonatomic) unsigned long long exposeTimes;
@property (retain, nonatomic) NSString *bizInfoId;
@property (retain, nonatomic) NSMutableSet *exposedRecomendContacts;
@property (nonatomic) unsigned long long vcSessionStayTimeMs;
@property (nonatomic) BOOL hadReportNewLife;
@property (nonatomic) BOOL stopReport;
@property (weak, nonatomic) WCFinderStreamProfileViewModel *viewModel;
@property (retain, nonatomic) WCFinderLiveAudienceNoticeReporter *liveReporter;
@property (nonatomic) unsigned long long vcSessionInTimeMs;
@property (nonatomic) unsigned long long vcSessionOutTimeMs;
@property (nonatomic) unsigned long long leaveInteractionType;

- (id)init;
- (void)recordElement:(unsigned int)a0 expose:(BOOL)a1;
- (void)bindPostView:(id)a0 bindId:(id)a1;
- (void)bindPostView:(id)a0 bindId:(id)a1 viewReportPolicy:(unsigned long long)a2 dynamicParamsBlock:(id /* block */)a3;
- (void)reportClickElement:(unsigned int)a0;
- (void)recordMiniAppIds:(id)a0;
- (void)cleanAll;
- (void)exposeElementAgain;
- (void)reportProfileExposed;
- (void)reportProfileDisappear;
- (id)enterPageReportExtInfo:(id)a0;
- (void)reportExposeAtEvent;
- (void)reportProfileAction:(unsigned long long)a0 extInfo:(id)a1;
- (void)reportChannelProfilePOIWithEventType:(long long)a0 poiName:(id)a1;
- (void)reportExposeSignatureExpand:(BOOL)a0;
- (void)reportClickSignatureExpand:(BOOL)a0;
- (void)reportOlympicsExpose;
- (id)extBizInfoIdInLog;
- (void)reportNickNameClick;
- (void)reportRecommendFollowExpose:(id)a0 recommendReason:(id)a1 idx:(long long)a2;
- (void)reportRecommendFollowClick:(id)a0 recommendReason:(id)a1 idx:(long long)a2;
- (void)reportRecommendFollowItem:(id)a0 event:(id)a1 recommendReason:(id)a2 idx:(long long)a3;
- (unsigned long long)getVcSessionStayTimeMs;
- (void)reportNewLifeProfileSessionIn;
- (void)reportNewLifeProfileSessionOut;
- (void).cxx_destruct;

@end
