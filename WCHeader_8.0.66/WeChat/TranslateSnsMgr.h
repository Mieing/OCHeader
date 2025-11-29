@class NSString, NSMutableDictionary;

@interface TranslateSnsMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, WCFacadeExt> {
    NSMutableDictionary *_dicSessionTransInfos;
    NSMutableDictionary *_dicSequenceWaitTask;
    NSMutableDictionary *_dicSequenceRunningTask;
    unsigned int _sequence;
    BOOL _isWorking;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSnsTransDataWrap:(id)a0 andScene:(int)a1;
+ (id)getSnsTransDataWrapWithComment:(id)a0 andScene:(int)a1 andDataItemTid:(id)a2;
+ (BOOL)checkContentOrComment:(id)a0;
+ (BOOL)canShowTranslateView:(id)a0;
+ (BOOL)showTranslatedTextBtn:(id)a0;
+ (id)GetTranslateContent:(id)a0;

- (id)init;
- (void)dealloc;
- (void)resetSnsAllTranslatingStatus;
- (void)clearSnsTranslateCache;
- (void)changeLanguageAndCleanAllCache;
- (void)onServiceMemoryWarning;
- (id)getCommentSnsID:(id)a0 withDataItemID:(id)a1;
- (id)getContentSnsID:(id)a0;
- (id)getSnsID:(id)a0;
- (id)getDataWrapContent:(id)a0;
- (void)callExtensionWhenPhotoContentChange:(id)a0;
- (void)translateSns:(id)a0;
- (void)tryTranslateMsgs;
- (id)getTranslateInfo:(id)a0;
- (void)removeTranslateInfo:(id)a0;
- (BOOL)showTranslatedTextNow:(id)a0;
- (BOOL)shouldNeedShowAnimation:(id)a0;
- (void)showAnimationEnd:(id)a0;
- (BOOL)taskInQueue:(id)a0;
- (id)pathForSessionTransInfos:(id)a0;
- (void)loadSessionTransInfos:(id)a0;
- (void)saveSessionTransInfos:(id)a0;
- (void)onDataItemDeleteFinished:(long long)a0 dataItemID:(id)a1;
- (void)onCommentItemDeleteFinished:(long long)a0 commentItemID:(id)a1 dataItemID:(id)a2;
- (void)notifyTranslateSnsChanged:(id)a0;
- (void)asyncNotifyTranslateSnsChanged:(id)a0;
- (void)responseForTransTextResponse:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
