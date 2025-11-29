@class NSString;

@interface MMFinderLiveAnchorTaskEntranceMgr : MMUserService <IExptServiceExt, MMServiceProtocol>

@property (nonatomic) int primarySettingEnrance;
@property (nonatomic) int fetchMoneyEnrance;
@property (nonatomic) int liveCompleteEnrance;
@property (nonatomic) int liveCreateEnrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportForAnchorTaskExpose:(long long)a0;
+ (void)reportForAnchorTaskClick:(long long)a0;
+ (void)gotoLiveAnchorTaskWebPageFromNav:(id)a0 fromScene:(long long)a1 webviewReturnBlock:(id /* block */)a2;
+ (void)gotoOperationWebPageFromNav:(id)a0 urlStr:(id)a1 webviewReturnBlock:(id /* block */)a2;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetData;
- (void)checkAndUpdateData;
- (BOOL)isEntranceEnableShowAnchorTask:(long long)a0;
- (void)onExptItemListChange;
- (BOOL)enableShowLiveAnchorTaskEntrance:(long long)a0;

@end
