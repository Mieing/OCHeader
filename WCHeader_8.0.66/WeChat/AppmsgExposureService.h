@class NSString, NSMutableDictionary;

@interface AppmsgExposureService : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_uid2HasExposuredMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)chatExposuredWithSvrID:(unsigned long long)a0 chatName:(id)a1 urlInfoList:(id)a2 sendUserName:(id)a3 createTime:(unsigned int)a4 currSessionID:(unsigned int)a5;
- (void)chatReportIfExposuredWithSvrID:(unsigned long long)a0;
- (void)chatLogErrorIfHasExposuredButNotReport;
- (void)snsExposuredWithTid:(id)a0 contentUrl:(id)a1 itemShowType:(unsigned int)a2 sendUserName:(id)a3 createTime:(unsigned int)a4 itemShowTypeFrom:(unsigned int)a5;
- (void)snsReportIfExposuredWithTid:(id)a0;
- (void)snsLogErrorIfHasExposuredButNotReport;
- (void)profileExposuredWithMsgID:(id)a0 brandName:(id)a1 urlInfo:(id)a2;
- (id)uidForScene:(unsigned int)a0 innerID:(id)a1;
- (void)exposuredWithScene:(unsigned int)a0 innerID:(id)a1 chatName:(id)a2 urlInfoList:(id)a3 sendUserName:(id)a4 createTime:(unsigned int)a5 currSessionID:(unsigned int)a6;
- (void)reportIfExposuredWithScene:(unsigned int)a0 innerID:(id)a1;
- (void)doReportExposureItem:(id)a0 urlInfo:(id)a1 chatType:(unsigned int)a2;
- (void)logErrorIfHasExposuredButNotReport:(unsigned int)a0;
- (void)reportWithId:(unsigned int)a0 key:(long long)a1 value:(unsigned int)a2;
- (void).cxx_destruct;

@end
