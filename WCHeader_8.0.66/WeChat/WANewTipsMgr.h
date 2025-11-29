@class NSString, NSMutableDictionary, NSMutableArray;

@interface WANewTipsMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    NSMutableDictionary *_id2NextUpdateTimeDic;
    NSMutableArray *_updatingTipsKeyList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)fetchWeAppRealTimeReddotMsgIfNeeded;
- (void)fetchRealTimeReddotMsgIfNeededWithNewTipsInfo:(id)a0;
- (void)fetchRealTimeReddotMsgWithTipsId:(unsigned int)a0 uniqueId:(id)a1 showType:(unsigned int)a2 title:(id)a3 iconUrl:(id)a4 extInfo:(id)a5;
- (void)handleGetWeAppCellNotifyMsgResp:(id)a0;
- (BOOL)isNewTipsInfoNeedRealTimeUpdate:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)reportDiscoveryPageExpose;
- (void)reportDiscoveryTabExpose:(BOOL)a0;
- (void)reportDiscoveryTabClick:(BOOL)a0 isNative:(BOOL)a1;
- (id)genKeyWithTipsId:(unsigned int)a0 uniqueId:(id)a1;
- (unsigned long long)getNextUpdateTimeWithTipsId:(unsigned int)a0 uniqueId:(id)a1;
- (void)setNextUpdateTime:(unsigned long long)a0 tipsId:(unsigned int)a1 uniqueId:(id)a2;
- (BOOL)isTipsInfoInUpdatingListWithTipsId:(unsigned int)a0 uniqueId:(id)a1;
- (void)addTipsInfoToUpdatingListWithTipsId:(unsigned int)a0 uniqueId:(id)a1;
- (void)removeTipsInfoFromUpdatingLIstWithTipsId:(unsigned int)a0 uniqueId:(id)a1;
- (void).cxx_destruct;

@end
