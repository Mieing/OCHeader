@class NSDictionary, NSMutableSet, NSString;

@interface IESLiveInteractiveMonitor : NSObject <IESLiveInteractAction, IESLiveInteractiveMonitor>

@property (retain, nonatomic) NSDictionary *inputParams;
@property (retain, nonatomic) NSMutableSet *observerSet;
@property (nonatomic) int preAudioSessionRouteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)observeNotifications;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)linkerEnterWithExtParams:(id)a0;
- (void)mediaFirstFrameWithExtParams:(id)a0;
- (void)trackAudioSessionRoute;
- (id)detectHeadsetPluggedIn;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)dealloc;

@end
