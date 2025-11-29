@class NSString, RedPointCtrlInfo, NSArray;

@interface WCSettingRedPointMgr : MMUserService <IMsgExt, MMServiceProtocol> {
    RedPointCtrlInfo *_ctrlInfo;
    NSArray *_validRedPointPathArray;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)loadData;
- (void)clearAllData;
- (BOOL)shouldShowRedPointInMoreTab;
- (BOOL)shouldShowRedPointInSetting;
- (BOOL)shouldShowRedPointInPrivacy;
- (BOOL)shouldShowRedPointInRecentOption;
- (BOOL)shouldShowRedPointInGeneralCell;
- (BOOL)shouldShowRedPointInPluginCell;
- (BOOL)shouldShowRedPointInPluginItem:(id)a0;
- (BOOL)trySetSeqWhenShowMoreView;
- (BOOL)trySetSeqWhenShowSettingView;
- (BOOL)trySetSeqWhenShowPrivacyView;
- (BOOL)trySetSeqWhenShowRecentOptionView;
- (BOOL)trySetSeqWhenShowGeneralView;
- (BOOL)trySetSeqWhenShowPluginView;
- (BOOL)trySetSeqWhenShowPluginProfileInfo:(id)a0;
- (void)delCtrlInfo;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)parseRedPointCtrlMsg:(id)a0;
- (BOOL)canPluginReceiveRedPoint:(id)a0;
- (void).cxx_destruct;

@end
