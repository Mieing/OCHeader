@class NSString, WCPayIBGCheckJSAPICgi;

@interface WebviewJSEventHandler_handleWCPayWalletBuffer : WebviewJSEventHandlerBase <WCPayIBGCheckJSAPICgiDelegate>

@property (retain, nonatomic) NSString *action;
@property (nonatomic) long long region;
@property (retain, nonatomic) NSString *buffer;
@property (retain, nonatomic) NSString *currentBuffer;
@property (retain, nonatomic) WCPayIBGCheckJSAPICgi *cgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)ibgCheckJSAPICgi:(id)a0 didGetResponse:(id)a1;
- (void)ibgCheckJSAPICgi:(id)a0 didFailWithError:(id)a1;
- (id)mmkvBufferKeyWithRegion:(long long)a0;
- (void)callFail;
- (void)handleSaveBuffer;
- (void)handleFetchBuffer;
- (void).cxx_destruct;

@end
