@class WCAudioModuleList, NSString, NSMutableDictionary, MMTimer, NSMutableArray;

@interface WCAudioModuleMgr : MMUserService <SystemSoundEventExt, ISysCallCheckExt, MMServiceProtocol> {
    BOOL m_didSetActiveModule;
    int m_maxInterruptUnit;
    BOOL m_callOnMainThread;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *activeAudioList;
@property (retain, nonatomic) WCAudioModuleList *interruptAudioList;
@property (retain, nonatomic) NSMutableDictionary *audiosDict;
@property (retain, nonatomic) MMTimer *activeCheckTimer;
@property (nonatomic) BOOL isCheckingOtherAudio;
@property (nonatomic) int checkInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)audioModule:(id)a0 canAddToAudioListDirectly:(id)a1;
+ (BOOL)audioModule:(id)a0 canReplaceAudioList:(id)a1;
+ (BOOL)moduleList:(id)a0 containModule:(id)a1;
+ (BOOL)audioModule:(id)a0 canMixWithAudioList:(id)a1;
+ (BOOL)audioList:(id)a0 canMixWithAudioModule:(id)a1;
+ (id)descriptionForModules:(id)a0;
+ (BOOL)isActivedAudioModuleUsingAudio:(id)a0;
+ (void)initialize;
+ (id)getAllScenes;
+ (id)getScenesExcludeArray:(id)a0;

- (void)startTimerCleanAudioModules;
- (void)cleanAudioModules;
- (void)cleanAudioModuleIfNeed:(id)a0;
- (void)cleanAudioModule:(id)a0;
- (id)getAudioModuleWithScene:(int)a0 groupName:(id)a1 identifier:(id)a2 createIfNotExist:(BOOL)a3;
- (id)genKey:(int)a0 groupName:(id)a1 identifier:(id)a2;
- (void)systemSoundWillStart:(unsigned int)a0;
- (void)systemSoundDidStop:(unsigned int)a0;
- (void)BeginInterruption;
- (void)EndInterruption;
- (void)OnSysCallState:(int)a0 andCallId:(id)a1;
- (void)startActiveCheck;
- (void)stopActiveCheck;
- (void)timerActiveCheck;
- (void)executeActiveCheck;
- (void)asyncCheck3rdAppActive;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (BOOL)setActive:(BOOL)a0 scene:(int)a1 listener:(id)a2;
- (BOOL)setActive:(BOOL)a0 scene:(int)a1 identifier:(id)a2 listener:(id)a3;
- (BOOL)setActive:(BOOL)a0 scene:(int)a1 identifier:(id)a2 options:(unsigned long long)a3 listener:(id)a4;
- (BOOL)setActive:(BOOL)a0 scene:(int)a1 groupName:(id)a2 identifier:(id)a3 options:(unsigned long long)a4 listener:(id)a5;
- (id)getConflictWording;
- (void)showConflictWording;
- (BOOL)resumeInterruptModule;
- (BOOL)canSetActiveWithScene:(int)a0;
- (BOOL)canSetActiveWithScene:(int)a0 mixList:(id)a1;
- (BOOL)canSetActiveWithScene:(int)a0 groupName:(id)a1 identifier:(id)a2;
- (BOOL)canSetActiveWithScene:(int)a0 groupName:(id)a1 identifier:(id)a2 mixList:(id)a3;
- (id)currentActiveModules;
- (BOOL)isAudioModuleActive:(int)a0;
- (id)currentInterruptModules;
- (BOOL)isAudioModuleInterrupt:(int)a0;
- (void)cancelInterruptionNotifyWithScene:(int)a0;
- (void)cancelInterruptionNotifyWithScene:(int)a0 groupName:(id)a1 identifier:(id)a2;
- (id)getAudioModuleWithScene:(int)a0 groupName:(id)a1 identifier:(id)a2;
- (BOOL)activeAudioModule:(id)a0;
- (BOOL)deactiveAudioModule:(id)a0;
- (void)moveAudioToActive:(id)a0;
- (void)moveAllActiveToInterruptAndActiveModule:(id)a0;
- (void)chooseAudioToPlayAndNotify:(id)a0;
- (void)deactiveAudioSession;
- (void)removeAudioModuleFromActiveListIfNeed;
- (void)notifyWillActiveAudioModule:(id)a0;
- (void)notifyDidActiveAudioModule:(id)a0;
- (void)notifyDidDeactiveAudioModule:(id)a0;
- (void)resetAudioInputMutedIfNeed:(id)a0;
- (void).cxx_destruct;

@end
