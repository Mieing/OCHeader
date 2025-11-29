@class NSString;

@interface AWEIMSilverWingTrackComponent : AWEIMComponentBase <AWEIMSendMessageControllerDelegate, AWEIMSilverWingTrackInterface>

@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)aiExtParamsForMessage;
- (id)extraParamsAddToSendMessageTrackWithCid:(id)a0;
- (id)extraParamsAddToSendMessageResponseTrackWithCid:(id)a0;
- (id)aiExtParamsAddTosendMessage;
- (BOOL)__isAIActive;
- (void).cxx_destruct;
- (id)getSessionId;

@end
