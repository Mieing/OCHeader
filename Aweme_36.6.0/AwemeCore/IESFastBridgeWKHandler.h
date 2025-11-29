@class NSString, IESBridgeEngine_Deprecated;

@interface IESFastBridgeWKHandler : NSObject <WKScriptMessageHandler>

@property (retain, nonatomic) IESBridgeEngine_Deprecated *bridgeEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBridgeEngine:(id)a0;
- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
