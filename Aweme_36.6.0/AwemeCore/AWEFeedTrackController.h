@class AWEControllerEvent, NSString;

@interface AWEFeedTrackController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTrackControllerListenerProtocol, AWEFeedTrackControllerProtocol>

@property (retain, nonatomic) AWEControllerEvent *listenerRegister;
@property (nonatomic) double lastSlideDownTimeStamp;
@property (nonatomic) double lastSlideUpTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;

- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (void)trackWithTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (void)willTrackEventWithTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (void)didTrackEventWithTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1 allTrackParams:(id)a2;
- (id)paramsForEnterPersonalDetail;
- (id)paramsForSlideWithTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (void)didTrackEnterPersonalDetail;
- (id)paramsForVideoClientShowWithInitialContextParams:(id)a0;
- (void)reportDuplicateWithTrackEventType:(unsigned long long)a0 forKey:(id)a1 listener:(id)a2 listenerParams:(id)a3 allTrackParams:(id)a4;
- (id)trackEventNameWithTrackEventType:(unsigned long long)a0;
- (void)willTrackStayTimeWithInitialContextParams:(id)a0;
- (void)willTrackVideoClientShowWithInitialContextParams:(id)a0;
- (void)willTrackSlideWithTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForStayTimeWithInitialContextParams:(id)a0;
- (void)didTrackVideoClientShowWithAllTrackParams:(id)a0;
- (unsigned long long)trackPlatformWithTrackEventType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (void)viewDidLoad;

@end
