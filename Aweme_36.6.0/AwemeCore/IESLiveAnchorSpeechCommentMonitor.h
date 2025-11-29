@class NSString;
@protocol IESLiveRoomService;

@interface IESLiveAnchorSpeechCommentMonitor : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) double traceback;
@property (copy, nonatomic) NSString *reqId;
@property (nonatomic) double asrStartTimeStamp;
@property (nonatomic) double asrFirstResultTimeStamp;
@property (nonatomic) double asrKeywordResultTimeStamp;
@property (nonatomic) long long userActionCount;
@property (nonatomic) long long keywordCount;
@property (nonatomic) long long asrStartCount;
@property (nonatomic) long long asrCompleteCount;
@property (nonatomic) long long asrNoResultTimeoutCount;
@property (nonatomic) long long asrFinalTimeoutCount;
@property (nonatomic) long long userActionCheckFailedCount;
@property (nonatomic) long long asrKeywordCheckFailedCount;
@property (nonatomic) long long keywordDiscardCount;
@property (nonatomic) long long asrNetworkErrorCount;
@property (nonatomic) long long asrServiceErrorCount;
@property (nonatomic) long long matchSuccessCount;
@property (nonatomic) long long matchFailedCount;

- (void)trackSpeechEngineInitWithAsr:(BOOL)a0 ret:(long long)a1 duration:(double)a2;
- (void)trackSpeechEngineStartWithAsr:(BOOL)a0 ret:(long long)a1;
- (void)trackSpeechEngineErrorWithAsr:(BOOL)a0 ret:(long long)a1 reqId:(id)a2 errMsg:(id)a3;
- (void)recordAsrReturnFirstResult;
- (id)anchorSpeechCommentDataParams;
- (void)trackKwsModelDownloadErrorWithRet:(long long)a0;
- (void)trackAsrStopWithResult:(id)a0;
- (void)recordKwsWakeUpWithKeyword:(id)a0 traceback:(double)a1;
- (void)recordAsrKeywordCheckPass;
- (void)recordAsrStartWithReqId:(id)a0;
- (id)commonExtraParamsWithAsr:(BOOL)a0;
- (id)engineNameWithAsr:(BOOL)a0;
- (void)trackAsrInterruptionWithReqId:(id)a0 result:(id)a1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
