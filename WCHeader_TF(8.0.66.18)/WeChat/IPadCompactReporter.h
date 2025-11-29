@class NSString;

@interface IPadCompactReporter : MMUserService <MMKernelExt, IVOIPUILogicMgrExt, VoipUIManagerExt, MMServiceProtocol>

@property (nonatomic) BOOL checkVisionPlatform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)reportAction:(long long)a0;
- (void)reportMainTabIndexChange:(unsigned long long)a0;
- (void)reportFindFriendRowSelect:(unsigned long long)a0;
- (void)onServiceEnterForeground;
- (void)UIManagerDidOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 startInApp:(BOOL)a2 isEarMode:(BOOL)a3 isAudioMode:(BOOL)a4 from:(unsigned long long)a5;
- (void)onVoipAccept:(id)a0;
- (void)onManulLoginOK;
- (void)onManulLogOut;
- (void)onKickQuit;

@end
