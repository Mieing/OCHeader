@class NSTimer, NSString;
@protocol AWEHPChannelControllerProtocol;

@interface AWEMRDotSceneMonitorController : NSObject <AWEHPChannelPluginControllerProtocol, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (weak, nonatomic) id<AWEHPChannelControllerProtocol> channelController;
@property (retain, nonatomic) NSTimer *snapshotTimer;
@property (nonatomic) long long snapShotTimes;
@property (nonatomic) double trackTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)monitorEnable;
+ (BOOL)allowInjectToChannel:(id)a0;
+ (long long)snapShotInterval;
+ (long long)snapShotTimesConfig;
+ (double)targetContrastValue;
+ (id)sceneMonitorConfig;
+ (long long)sampleCount;

- (void)channelViewDidAppear:(id)a0;
- (void)channelViewDidDisappear:(id)a0;
- (void)channel:(id)a0 dotSceneStyleDidChange:(unsigned long long)a1;
- (void)checkDotSceneStyle;
- (void)snapShotCheckSceneStyle;
- (void)calculateContrastValueWithSceneStyle:(unsigned long long)a0;
- (void)trackErrorSceneWithContrastValue:(double)a0 sceneStyle:(unsigned long long)a1;
- (void)getContrastColorWithSceneStyle:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)getCurrentBadgeColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannel:(id)a0;

@end
