@class NSString;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedAnchorController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTrackControllerListenerProtocol>

@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (id)paramsForEnterPersonalDetail;
- (id)paramsForVideoClientShowWithInitialContextParams:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
