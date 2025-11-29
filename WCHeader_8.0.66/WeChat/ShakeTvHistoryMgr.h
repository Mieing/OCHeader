@class NSString, NSMutableArray;

@interface ShakeTvHistoryMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL _hadLoadCache;
    NSMutableArray *_shakeTvList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)tryLoadCache;
- (void)saveHistory;
- (void)opShakeTvHistory:(unsigned int)a0 brandUserName:(id)a1;
- (id)pathForCache;
- (void)addTvItem:(id)a0;
- (void)deleteTvItem:(id)a0 needSaveCache:(BOOL)a1;
- (void)notifyDeleteTvItem:(id)a0;
- (void)deleteTvItem:(id)a0;
- (id)getHistoryTvItemList;
- (void)clearAllHistory;
- (void)handleShakeTvTempSession:(id)a0 deeplinkUrl:(id)a1 currVC:(id)a2 statScene:(unsigned int)a3 openLinkScene:(int)a4;
- (void)handleOpTvHist:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
