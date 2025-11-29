@class NSMutableDictionary;

@interface AFDSystemVolumeManager : NSObject

@property (retain) NSMutableDictionary *volumeChangeHandlers;
@property (nonatomic) double lastestVolume;

+ (id)sharedInstance;

- (id)registerSystemVolumeChanged:(id /* block */)a0;
- (void)removeVolumeHandlerWithIdentifier:(id)a0;
- (void)applicationEnterForeground;
- (void)delayHoldMPVolumeView;
- (void)setupObserver;
- (void)setupVolumeObserver;
- (BOOL)hitRecommendedStrategy;
- (void)setActiveIfNeeded;
- (void)observeAppLifeCycle;
- (void)observeOutputVolumeProperty;
- (void)observePrivateNotification;
- (void)observeVolumeChanged:(double)a0 lastVolume:(double)a1;
- (id)volumeChangedNotificationConfigure;
- (void)volumeChangedPrivateNotification:(id)a0;
- (BOOL)hitObserverPrivateNotificationStrategy;
- (id)outputDeviceDidChangeVolumeConfigure;
- (id)newSystemVolumeDidChangConfigure;
- (id)systemVolumeDidChangConfigure;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
