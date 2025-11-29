@class NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWEIMLCPushMessageComponent : AWEIMComponentBase <IESLCMessageHandlerService>

@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)componentDidMounted:(id)a0;

@end
