@class NSString, JSEvent, LocationRetriever;

@interface WebviewJSEventHandler_geoLocation : WebviewJSEventHandlerBase <LocationRetrieveDelegate, IWebviewAskAuthorizationLogicExt> {
    long long m_geoLocationType;
    LocationRetriever *_locationRetriever;
    JSEvent *_jsEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)a0;
- (void)OnAskAuthorizationFailure:(id)a0 ForAuthInfo:(id)a1;
- (void)startRetrieverAddress;
- (void)onRetrieveLocationError:(int)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationOK:(id)a0;
- (void).cxx_destruct;

@end
