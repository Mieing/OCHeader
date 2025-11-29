@class NSDictionary, NSString;

@interface AWELivePreStreamPinTopGuideElement : AWELiveBaseElement <AWELivePreStreamAlertPriorityProtocol, AWELiveCommonSceneMessage>

@property (retain, nonatomic) NSDictionary *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)showComponentWithPitayaMessage:(id)a0;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (BOOL)p_elementSupportHomepage;
- (void)p_liveTabPinTopViewShowWithMessage:(id)a0;
- (id)elementView;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (void)dealloc;

@end
