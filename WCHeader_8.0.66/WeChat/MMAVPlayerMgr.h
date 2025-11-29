@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MMAVPlayerMgr : MMUserService <MMServiceProtocol> {
    NSMutableArray *m_arrItem;
    NSMutableArray *m_clearQueue;
    int m_aliveAvPlayer;
    BOOL m_isActive;
    BOOL m_pauseMusic;
    BOOL m_slowPlaying;
    int m_queueSemaphore;
    unsigned int m_holdingFlag;
    NSObject<OS_dispatch_queue> *m_avmgrQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)registItem:(id)a0;
- (void)unregistItem:(id)a0;
- (void)performDeactive;
- (BOOL)checkRestartMusic;
- (void)startHoldingUpdate:(int)a0;
- (void)stopHoldingUpdate:(int)a0;
- (void)killItem:(id)a0;
- (void)setItem:(id)a0 inToScreen:(BOOL)a1;
- (void)loadItem:(id)a0 forVideoPath:(id)a1;
- (void)pauseItem:(id)a0;
- (void)pauseItem:(id)a0 isForceToPause:(BOOL)a1;
- (void)fullLoadItem:(id)a0;
- (void)fullPlayItem:(id)a0;
- (void)fullPlayItem:(id)a0 muted:(BOOL)a1 audioCategory:(unsigned long long)a2;
- (void)silentPlayItem:(id)a0;
- (void)syncSilentPlayItem:(id)a0;
- (void)clearItem:(id)a0;
- (void)addToClearQueue:(id)a0;
- (void)internalClearItemInQueue;
- (void)removeFromClearQueue:(id)a0;
- (void)clearItemImmediatly:(id)a0;
- (BOOL)stackAllItem;
- (void)resumeAllItem;
- (void)checkItemState;
- (void)internalCheckItemState;
- (void)internalPerformClear:(id)a0;
- (void)internalPerformSilentPlay:(id)a0;
- (void)internalPerformFullPlay:(id)a0;
- (void)internalPerformFullPlay:(id)a0 muted:(BOOL)a1 audioCategory:(unsigned long long)a2;
- (void)notifyScrollViewStable;
- (void).cxx_destruct;

@end
