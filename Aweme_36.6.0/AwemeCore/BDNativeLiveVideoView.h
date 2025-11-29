@class NSString, NSMutableSet, TVLManager, BDImageView;
@protocol BDNativeLiveVideoViewPlayerDelegate;

@interface BDNativeLiveVideoView : UIView <TVLDelegate>

@property (retain, nonatomic) TVLManager *innerPlayer;
@property (retain, nonatomic) BDImageView *posterImageView;
@property (retain, nonatomic) NSMutableSet *observerSet;
@property (nonatomic) BOOL registeredObservers;
@property (nonatomic) BOOL interrupted;
@property (weak, nonatomic) id<BDNativeLiveVideoViewPlayerDelegate> delegate;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL couldPlay;
@property (nonatomic) BOOL mute;
@property (nonatomic) double volume;
@property (copy, nonatomic) NSString *fitMode;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recieveError:(id)a0;
- (void)stallStart;
- (void)stallEnd;
- (void)onStreamDryup:(id)a0;
- (void)onMonitorLog:(id)a0;
- (void)loadStateChanged:(id)a0;
- (void)startRender;
- (void)manager:(id)a0 didReceiveSEI:(id)a1;
- (void)manager:(id)a0 videoCropAreaDidAutomaticallyChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)manager:(id)a0 videoSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)manager:(id)a0 playerItemStatusDidChange:(long long)a1;
- (void)__configFitMode;
- (void)configCoverHidden:(BOOL)a0;
- (void)setupSrc:(id)a0;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)a0;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)a0;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)a0;
- (void)handleUIApplicationWillResignActiveNotification:(id)a0;
- (void)handleAVAudioSessionInterruptionNotification:(id)a0;
- (void)registerObserver;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)removeObservers;

@end
