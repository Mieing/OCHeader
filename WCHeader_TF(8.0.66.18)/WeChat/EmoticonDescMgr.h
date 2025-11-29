@class NSMutableDictionary, EmoticonDescRecommandLogic, NSMutableSet, NSString;

@interface EmoticonDescMgr : MMUserService <EmoticonDescRecommandLogicDelegate, IEmoticonPackageMgrExt, PBMessageObserverDelegate, IMMLanguageMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *m_requestPidSet;
@property (retain, nonatomic) NSMutableDictionary *m_emoticonDescCache;
@property (retain, nonatomic) NSMutableDictionary *m_emoticonPackageHasDesc;
@property (retain, nonatomic) NSMutableDictionary *m_emoticonPackageDescCount;
@property (retain, nonatomic) EmoticonDescRecommandLogic *descRecommandLogic;
@property (retain, nonatomic) NSMutableSet *requestingPids;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)requestEmoticonWrapByDesc:(id)a0;
- (BOOL)isInWordList:(id)a0;
- (BOOL)hasDescPid:(id)a0;
- (unsigned long long)getEmoticonDescCountByPid:(id)a0;
- (id)getEmoticonCurLangDescByPackageId:(id)a0 Md5:(id)a1 needGetRemoteDesc:(BOOL)a2;
- (id)getEmoticonCurLangDescByPackageId:(id)a0 Md5:(id)a1;
- (id)getEmoticonDescByPackageId:(id)a0 Md5:(id)a1 withLanguageCode:(id)a2 needGetRemoteDesc:(BOOL)a3;
- (id)getEmoticonDescByPackageId:(id)a0 Md5:(id)a1 withLanguageCode:(id)a2;
- (id)getEmoticonMsgDescForCurlangWithMsgWrap:(id)a0;
- (id)dicFromSvrDescStr:(id)a0;
- (BOOL)getEmoticonButtonDescByPid:(id)a0;
- (BOOL)getEmoticonDescByPid:(id)a0 LastRequestTime:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleRespForGetEmotionDesc:(id)a0;
- (void)updateDescToMd5CacheFromServerPackageDesc:(id)a0;
- (id)getWordingFromDic:(id)a0 withCode:(id)a1;
- (id)updateEmoticonDescFromServer:(id)a0 shouldGetFromServer:(BOOL)a1;
- (void)updateDescFromFile:(id)a0 shouldUpdateFromServer:(BOOL)a1;
- (void)updateEmoticonDescCacheWithDescList:(id)a0 pid:(id)a1;
- (void)onLanguageChange;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)a0 WithPid:(id)a1;
- (id)getEmoticonPackageDescForPid:(id)a0;
- (void)onEmoticonDescRecommandLogicFinishSearchWithKeyword:(id)a0 result:(id)a1;
- (void).cxx_destruct;

@end
