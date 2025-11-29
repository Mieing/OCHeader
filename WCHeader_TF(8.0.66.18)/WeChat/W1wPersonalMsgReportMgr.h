@class NSString, W1wCommonReport;

@interface W1wPersonalMsgReportMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) W1wCommonReport *commonReport;
@property (retain, nonatomic) NSString *referClickId;
@property (retain, nonatomic) NSString *referPagePath;
@property (retain, nonatomic) NSString *referListClickId;
@property (retain, nonatomic) NSString *referContentClickId;
@property (nonatomic) BOOL isReferListPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)report28760:(unsigned long long)a0 actionType:(unsigned long long)a1 itemType:(unsigned long long)a2 isClick:(BOOL)a3 msgSessionId:(id)a4 pageId:(id)a5;
- (id)getBoxInfo:(unsigned long long)a0;
- (id)getItemInfo:(unsigned long long)a0 msgSessionId:(id)a1;
- (id)getBoxExtInfo:(unsigned long long)a0 msgSessionId:(id)a1;
- (void)sendW1wPersonalMsgDataReportWithLogId:(unsigned int)a0 logstring:(id)a1 category:(unsigned int)a2;
- (id)getCommonReport;
- (id)getExtInfo:(id)a0 type:(unsigned long long)a1;
- (id)getReferListClickId;
- (id)getReferContentClickId;
- (void).cxx_destruct;

@end
