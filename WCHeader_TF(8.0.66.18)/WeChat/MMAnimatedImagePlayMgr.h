@class NSMutableDictionary, NSTimer, NSMutableSet, NSMapTable;

@interface MMAnimatedImagePlayMgr : MMObject {
    NSTimer *m_timer;
    NSMutableDictionary *m_playTimerDic;
    NSMutableSet *m_playingTasks;
    NSMapTable *m_viewToTaskTable;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)animatedImageViewWithData:(id)a0 config:(id)a1;
+ (id)animatedImageViewWithDecoder:(id)a0 config:(id)a1;

- (void)dealloc;
- (id)init;
- (void)addPlayTaskWithView:(id)a0 decoder:(id)a1;
- (void)addPlayTaskWithView:(id)a0 decoder:(id)a1 config:(id)a2;
- (void)resetPlayTaskWithView:(id)a0;
- (void)removePlayTaskWithView:(id)a0;
- (void)removePlayObserverWithView:(id)a0;
- (id)timerForPlayMode:(unsigned long long)a0;
- (void)startUpdateTasks;
- (void)stopUpdateTasks;
- (void)RegisterSysNotifications;
- (void)UnRegisterSysNotifications;
- (void)onApplicationWillTerminate:(id)a0;
- (void)onApplicationWillResignActive:(id)a0;
- (void)onApplicationDidBecomeActive:(id)a0;
- (void)onApplicationDidReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
