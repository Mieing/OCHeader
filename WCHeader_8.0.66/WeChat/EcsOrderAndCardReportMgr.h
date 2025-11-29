@class NSString, WCFinderRedDotCtrlInfo;

@interface EcsOrderAndCardReportMgr : MMUserService <MMServiceProtocol>

@property (copy, nonatomic) NSString *exposeId;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *lastClickMyTabCtrlInfo;
@property (nonatomic) unsigned long long pageEnterTime;
@property (nonatomic) BOOL needReportPageEvent;
@property (nonatomic) unsigned long long orderAndCardEnterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOrderAndCardEntrance;
- (void)fillCtrlInfoWithDic:(id)a0 CtrlInfo:(id)a1;
- (void)fillRedDotInfoWithDic:(id)a0 CtrlInfo:(id)a1 showInfo:(id)a2;
- (id)genReportParamsWithTitle:(unsigned int)a0 clickSessionId:(id)a1 leftCtrlInfo:(id)a2 leftShowInfo:(id)a3 rightCtrlInfo:(id)a4 rightShowInfo:(id)a5 isReceiveAfterEnter:(long long)a6;
- (void)orderAndCardReportWithTitle:(unsigned int)a0 clickSessionId:(id)a1 eventId:(id)a2 leftCtrlInfo:(id)a3 leftShowInfo:(id)a4 rightCtrlInfo:(id)a5 rightShowInfo:(id)a6 isReceiveAfterEnter:(long long)a7;
- (void)clickMyTab;
- (void)exitMyTab;
- (void)myTabRedDotExposeWithTime:(unsigned long long)a0 eventId:(id)a1 params:(id)a2;
- (void)revokeRedDotWithReason:(unsigned int)a0 eventId:(id)a1 ctrlInfo:(id)a2 showInfo:(id)a3;
- (void)orderAndCardExpose;
- (void)orderAndCardRedDotExposeWithTitleType:(unsigned int)a0 ctrlInfo:(id)a1 path:(id)a2;
- (void)orderAndCardClickWithTitle:(unsigned int)a0 clickSessionId:(id)a1;
- (void)orderAndCardPageReturn;
- (void).cxx_destruct;

@end
