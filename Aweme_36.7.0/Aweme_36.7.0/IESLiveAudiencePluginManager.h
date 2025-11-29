@class NSArray, NSString;

@interface IESLiveAudiencePluginManager : NSObject <IESLiveAudienceEventReceiver>

@property (retain, nonatomic) NSArray *pluginArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (BOOL)couldCloseRoom;
- (void)didFirstFrame:(id)a0;
- (void)didStartPlay:(id)a0;
- (void)willOrientationTransition:(long long)a0;
- (void)didOrientationTransition:(long long)a0;
- (id)businessPlugins;
- (void)roomDidEnterBackground;
- (void)roomWillEnterForeground;
- (void)roomDidBecomeActive;
- (void)roomWillTerminate;
- (id)abilityPlugins;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)initWithContext:(id)a0;
- (id)init;
- (void)viewWillAppear;
- (void)registerPlugins;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
