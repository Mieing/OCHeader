@class NSString;

@interface VoIPStatusExtensionSyncService : MMUserService <MMServiceProtocol>

@property (copy, nonatomic) id /* block */ updateAppStatusBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetAppStatus;
- (void)updateAppStatus;
- (void)cancelUpdatingAppStatusContinually;
- (void)updateAppStatusContinually;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)UIManagerDidOpenWindowWithContact:(id)a0 isCaller:(BOOL)a1 startInApp:(BOOL)a2 isEarMode:(BOOL)a3 isAudioMode:(BOOL)a4 from:(unsigned long long)a5;
- (void)UIManagerDidCloseCompletely;
- (void).cxx_destruct;

@end
