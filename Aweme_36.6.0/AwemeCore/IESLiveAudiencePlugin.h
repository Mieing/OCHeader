@class NSString;

@interface IESLiveAudiencePlugin : NSObject <IESLiveAudiencePluginProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reuseWithContext:(id)a0;
- (void)didLoadRoomWithReuseFlag:(BOOL)a0;
- (void)didEnterRoom:(id)a0;
- (void)didCloseRoomWithType:(unsigned long long)a0 willReuse:(BOOL)a1;
- (BOOL)couldCloseRoom;
- (void)didFirstFrame:(id)a0;
- (void)didStartPlay:(id)a0;
- (void)willOrientationTransition:(long long)a0;
- (void)didOrientationTransition:(long long)a0;
- (void)viewDidAppear;
- (void)initWithContext:(id)a0;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
