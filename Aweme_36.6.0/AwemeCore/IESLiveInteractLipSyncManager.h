@class NSString, IESLiveInteractLipSyncDriver, NSRecursiveLock;
@protocol IESLiveInteractLipSyncManagerDelegate;

@interface IESLiveInteractLipSyncManager : NSObject <IESLiveInteractLipSyncDelegate> {
    float *floatBuffer;
}

@property (retain, nonatomic) IESLiveInteractLipSyncDriver *lipSyncDriver;
@property (nonatomic) void *nativeAvatarApp;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastGenerateBSTime;
@property (weak, nonatomic) id<IESLiveInteractLipSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processAudioFrame:(id)a0 speaking:(BOOL)a1 completion:(id /* block */)a2;
- (double)liveHamletLipSyncFPS;
- (void)logEvent:(id)a0 logInfo:(id)a1;
- (void)logLipSyncDriverEvent:(id)a0 logInfo:(id)a1;
- (void)createAvatarAppWithConfig:(id)a0;
- (void)unloadLipSync;
- (BOOL)pushFeedAudioArray:(id)a0 audioFormat:(int)a1 sampleRate:(int)a2;
- (float *)getLipSyncOutputWithTime:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
