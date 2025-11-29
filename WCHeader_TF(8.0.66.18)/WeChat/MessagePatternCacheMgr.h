@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MessagePatternCacheMgr : NSObject <IMMLanguageMgrExt, IMMFontMgrExt> {
    NSMutableDictionary *m_dicCache;
    NSObject<OS_dispatch_queue> *m_worker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)ClearAllCache;
- (id)GetMsgPattern:(id)a0 MsgWrap:(id)a1;
- (void)SetMsgPattern:(id)a0 MsgWrap:(id)a1;
- (void)SaveCache:(id)a0;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (void)oniOS7FontChange;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (void)OnMemoryWarning;
- (void).cxx_destruct;

@end
