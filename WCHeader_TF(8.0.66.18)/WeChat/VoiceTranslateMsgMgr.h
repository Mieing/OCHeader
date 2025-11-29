@class VoiceTransInfo, NSString, VoiceTransSessionInfo, VoiceTransHelper, NSMutableArray, VoiceTranslateUtil;

@interface VoiceTranslateMsgMgr : MMUserService <VoiceTransDelegate, IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) VoiceTransInfo *currTransInfo;
@property (retain, nonatomic) VoiceTransHelper *transHelper;
@property (retain, nonatomic) VoiceTranslateUtil *translateUtil;
@property (retain, nonatomic) NSMutableArray *translateTaskArray;
@property (retain, nonatomic) VoiceTransSessionInfo *translateSessionInfo;
@property (nonatomic) BOOL disableAutoScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)cleanAllResult;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (BOOL)isOpenTranslateResult;
- (id)getTranslateInfo:(id)a0;
- (void)removeTranslateRecord:(id)a0 msgWrap:(id)a1;
- (BOOL)isExistTranslateRecord:(id)a0 msgWrap:(id)a1;
- (void)addTranslateRecord:(id)a0 msgWrap:(id)a1;
- (void)hiddenTransResult:(id)a0;
- (void)removeTranslateInfo:(id)a0;
- (void)checkSessionInfos:(id)a0;
- (void)stopAllScrollUp;
- (void)stopVoiceTranslate:(id)a0;
- (void)translateVoiceMessage:(id)a0;
- (void)translateVoiceMessage:(id)a0 AutoScrollUp:(BOOL)a1;
- (void)translateVoiceMessage:(id)a0 AutoScrollUp:(BOOL)a1 AutoTranslate:(BOOL)a2;
- (void)CheckQueue;
- (void)onVoiceTransBegin:(id)a0;
- (void)onVoiceTransVoiceID:(id)a0 transResult:(id)a1;
- (void)onVoiceTransEnd:(id)a0 FromCache:(BOOL)a1;
- (void)onVoiceTransFail:(id)a0 baseResponse:(id)a1;
- (void).cxx_destruct;

@end
