@class NSString;

@interface AWEIMGoodMoringEveningIslandComponent : AWEIMComponentBase <IESIMMessageSenderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)hostVC_afterFirstRender;

@end
