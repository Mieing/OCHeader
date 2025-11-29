@class NSString, AWEAwemeModel;
@protocol AWEPaidStreamControlProtocol;

@interface AWELongVideoPlayerLynxElement : LynxUI <AWELongVideoPlayerViewDelegate, AWEPaidStreamControlDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__731;
+ (id)__lynx_prop_config__1032;
+ (id)__lynx_prop_config__1083;
+ (id)__lynx_prop_config__1244;
+ (id)__lynx_prop_config__1345;
+ (id)__lynx_prop_config__1436;
+ (id)__lynx_ui_method_config__1507;
+ (id)__lynx_ui_method_config__1628;
+ (id)__lynx_ui_method_config__1719;
+ (id)__lynx_ui_method_config__18410;

- (void)play:(id)a0 withResult:(id /* block */)a1;
- (void)pause:(id)a0 withResult:(id /* block */)a1;
- (void)stop:(id)a0 withResult:(id /* block */)a1;
- (void)logExtra:(id)a0 requestReset:(BOOL)a1;
- (void)startposition:(id)a0 requestReset:(BOOL)a1;
- (void)updateWithAwemeModel:(id)a0;
- (void)seek:(id)a0 withResult:(id /* block */)a1;
- (void)repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)muted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)objectfit:(id)a0 requestReset:(BOOL)a1;
- (void)preparePaidStream;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:(id)a0;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (void)didReceivePaidNotification:(id)a0;
- (void)didReceiveVolumeChangedNotification:(id)a0;
- (id)audioVolumeChangedNotificationName;
- (void)checkAwemeModelWithParams:(id)a0 block:(id /* block */)a1;
- (void)sendLynxEventWithName:(id)a0;
- (void)sendLynxEventWithName:(id)a0 extraDetail:(id)a1;
- (id)audioCategoryNotificationParameterKey;
- (id)audioChangedReasonNotificationParameterKey;
- (id)audioVolumeNotificationParameterKey;
- (void)playerDidStop:(id)a0;
- (void)playerDidPause:(id)a0;
- (void)playerDidEnd:(id)a0;
- (void)player:(id)a0 didPlayError:(id)a1;
- (void)playerDidStartStall:(id)a0;
- (void)player:(id)a0 playTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)awememodel:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)createView;
- (void)playerDidStart:(id)a0;

@end
