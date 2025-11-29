@class NSString, NSMutableDictionary;
@protocol EmoticonListUpdateLogicDelegate;

@interface EmoticonListUpdateLogic : NSObject <EmoticonListCgiDelegate>

@property (retain, nonatomic) NSMutableDictionary *cgiDict;
@property (retain, nonatomic) NSMutableDictionary *cgiBuffDict;
@property (weak, nonatomic) id<EmoticonListUpdateLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onGetCellSetList:(id)a0 andEmotionList:(id)a1 hotNums:(id)a2 forResult:(unsigned long long)a3 reqType:(unsigned int)a4 reqId:(id)a5 pbData:(id)a6;
- (id)init;
- (BOOL)GetEmotionListFromStore:(unsigned int)a0 withReqType:(unsigned int)a1;
- (BOOL)getBoughtListFromServer;
- (void)cleanBuffForReqType:(unsigned int)a0;
- (void)endEmoticonListUpdateForReqType:(unsigned int)a0;
- (unsigned long long)getSessionIDForReqType:(unsigned int)a0;
- (id)getAdArrForReqType:(unsigned int)a0;
- (void)onGetListFinishedWithBuff:(id)a0 reqType:(unsigned int)a1;
- (void)onGetBannerSetList:(id)a0 andNewBannerList:(id)a1 reqType:(unsigned int)a2;
- (void)onGetListFailedForReqType:(unsigned int)a0;
- (void)onGetEmojiList:(id)a0 forResult:(unsigned long long)a1 reqType:(unsigned int)a2;
- (void)onGetCellSetList:(id)a0 andEmotionList:(id)a1 hotNums:(id)a2 forResult:(unsigned long long)a3 reqType:(unsigned int)a4 reqId:(id)a5;
- (void)onGetExptConfig:(id)a0 reqType:(unsigned int)a1;
- (id)getBufForReqType:(unsigned int)a0;
- (BOOL)isBufForReqTypeExist:(unsigned int)a0;
- (id)getCgiForReqType:(unsigned int)a0;
- (BOOL)checkIsBannerSetValid:(id)a0;
- (void).cxx_destruct;

@end
