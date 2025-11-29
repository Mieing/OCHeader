@class NSString;

@interface AWEIMMessageListEnterChatConfigStayForATimeComponent : AWEIMComponentBase <AWEIMMessageListEnterChatSubscriberProtocol>

@property BOOL hasCommerceTimed;
@property long long stayDurationSec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (id)messageListEnterChatRequestParamsForRequestSource:(long long)a0;
- (void)updateMessageListEnterChatData:(id)a0 requestSource:(long long)a1;
- (void)p_viewDidAppear;
- (id)vcParent;
- (void)p_startTimingWithTimerName:(id)a0 duration:(long long)a1;

@end
