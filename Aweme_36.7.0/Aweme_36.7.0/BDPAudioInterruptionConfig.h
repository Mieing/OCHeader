@class NSString, NSRecursiveLock;
@protocol BDPAudioInterruptionDelegate;

@interface BDPAudioInterruptionConfig : NSObject <BDPAppRouteChangeMessage, BDPCutLossesMessage>

@property (weak, nonatomic) id<BDPAudioInterruptionDelegate> delegate;
@property (nonatomic) unsigned long long interruptTypeUnion;
@property (nonatomic) unsigned long long interruptStateUnion;
@property (retain, nonatomic) NSRecursiveLock *locker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioRouteChangeListenerCallback:(id)a0;
- (void)setupObserver;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)cutLossesBeginWithUniqueID:(id)a0 info:(id)a1;
- (void)cutLossesEndWithUniqueID:(id)a0 isFulfilled:(BOOL)a1;
- (void)handleBackgroundAudioWouldPlayNotification:(id)a0;
- (void)handleBackgroundAudioWouldPauseNotification:(id)a0;
- (void)handleBackgroundAudioShouldPlayNotification:(id)a0;
- (void)handleBackgroundAudioShouldPauseNotification:(id)a0;
- (void)handleAudioInterruption:(id)a0;
- (void)handleSystemInterruption:(id)a0;
- (void)handleHostInterruption:(id)a0;
- (void)handleVideoAdPlayInterruption:(id)a0;
- (void)handleVideoAdPauseInterruption:(id)a0;
- (void)handleInterstitialAdPlayInterruption:(id)a0;
- (void)handleInterstitialAdPauseInterruption:(id)a0;
- (void)handleDrawAdPlayInterruption:(id)a0;
- (void)handleDrawAdPauseInterruption:(id)a0;
- (void)increaseInterruptCount:(unsigned long long)a0;
- (void)decreaseInterruptCount:(unsigned long long)a0;
- (BOOL)adOptMpIdEnable;
- (void)restoreInitialState;
- (void).cxx_destruct;
- (void)handleInterruption:(id)a0;
- (id)uniqueID;
- (long long)pageID;
- (void)dealloc;
- (id)initWithConfig:(unsigned long long)a0 delegate:(id)a1;

@end
