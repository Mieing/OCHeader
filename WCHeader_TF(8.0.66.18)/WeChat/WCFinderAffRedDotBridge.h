@class NSString;

@interface WCFinderAffRedDotBridge : WCFinderRedDotCommonImpl <WCFinderRedDotInterfaceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resetDataSourceByFinderUsername:(id)a0;
- (id)currentUseFinderUsername;
- (void)setCurrentUseFinderUsername:(id)a0;
- (void)resetToDefaultUsername;
- (void)handleFinderUsernameChangeLogic;
- (id)nativeCurrentUseFinderUsername;
- (void)addNewRedDotCtrlInfo:(id)a0;
- (BOOL)shouldShowRedDotAtPath:(id)a0;
- (BOOL)disposeRedDotAtPath:(id)a0;
- (BOOL)disposeRedDotAtPath:(id)a0 subReasonType:(unsigned long long)a1;
- (void)disposeRedDotIgnoreClearTypeAtPath:(id)a0;
- (void)clearSameTypeCtrlInfoType:(unsigned long long)a0;
- (BOOL)updateWXRedDotInfo:(id)a0;
- (id)ctrlInfoWithType:(unsigned long long)a0;
- (id)ctrlInfoWithTipsUuid:(id)a0;
- (unsigned long long)showInfoTypeAtPath:(id)a0;
- (id)currentShowInfoAtPath:(id)a0;
- (unsigned long long)ctrlInfoTypeAtPath:(id)a0;
- (id)currentCtrlInfoAtPath:(id)a0;
- (id)currentCtrlInfoAtPath:(id)a0 ignoreNMFrequency:(BOOL)a1;
- (void)clearSameRevokeIdCtrlInfo:(id)a0;
- (BOOL)revokeRedDotPathInfo:(id)a0 isOnlyWhiteList:(BOOL)a1 whiteListTips:(id)a2;
- (void)redDotInfoInvalidCheck;
- (void)revokeRedDotByViewFeedsIndex:(long long)a0 commentScene:(int)a1;
- (id)getRedDotCtrlInfoWithRevokeId:(id)a0;
- (void)saveSelfUuidCtrlInfosDic;
- (void)disposeGroupTipsWithGroupId:(id)a0;
- (id)getAllRedDotCtrlInfoAtPath:(id)a0;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)a0;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)a0 subReasonType:(unsigned long long)a1;
- (void)syncCtrlInfoBack:(id)a0;

@end
