@class NSString;

@interface WASearchAdMgr : MMUserService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)getKVLogHead;
- (void)weAppClickStream:(id)a0 keywordId:(id)a1 clickType:(int)a2 searchScene:(long long)a3;
- (void)reportADLog:(unsigned int)a0 logExt:(id)a1;
- (void)weAppSearchADClick:(id)a0 statKeywordId:(id)a1 searchId:(id)a2 docId:(id)a3 position:(long long)a4 appUserName:(id)a5 appVersion:(id)a6 adBuffer:(id)a7 searchScene:(long long)a8 clickExtInfo:(id)a9;
- (void)handleAdLogResp:(id)a0;
- (void)handleWeAppSearchAdClickResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
