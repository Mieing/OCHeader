@class WAWebViewPlugin_ReportPageEvent, NSString, WAWebViewPlugin_WeAppMsg, WAShareAppMessageForwardLogicControllerComponent;

@interface WAShareAppMessageProxyImplementationContext : NSObject <WAShareAppMessageForwardLogicControllerComponentDelegate>

@property (weak, nonatomic) WAWebViewPlugin_WeAppMsg *shareAppMessagePlugin;
@property (weak, nonatomic) WAWebViewPlugin_ReportPageEvent *reportPageEventPlugin;
@property (retain, nonatomic) WAShareAppMessageForwardLogicControllerComponent *forwardLogicControllerComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithShareAppMessagePlugin:(id)a0 reportPageEventPlugin:(id)a1;
- (id)viewControllerForForwardLogicControllerToShow:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSend:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageCancel:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_ConfirmCanceled:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageException:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_MessageSelectSession:(id)a0;
- (void)onWAShareAppMessageForwardLogicControllerComponent_WeAppMessageSend:(id)a0 appMsgItem:(id)a1;
- (void).cxx_destruct;

@end
