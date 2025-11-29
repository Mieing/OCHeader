@class NSString;
@protocol AWEIMWidgetTrackContextProtocol;

@interface AWEIMMessageTabWidgetEnterTrackComponent : AWEIMComponentBase <AWEIMMessageTabWidgetEnterTrackInterface>

@property (retain, nonatomic) id<AWEIMWidgetTrackContextProtocol> widgetContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)trackEnterMessageTabFromWidgetWithContext:(id)a0;
- (id)extraWidgetEnterChatParams;
- (void)messageTabDidDisappear;
- (void).cxx_destruct;

@end
