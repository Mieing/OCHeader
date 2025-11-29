@class NSString, MMUIViewController, EmoticonStoreReportInfo, JSEvent;

@interface WebviewJSEventHandler_openDesignerProfile : WebviewJSEventHandlerBase {
    JSEvent *m_event;
    NSString *m_designerId;
    MMUIViewController *m_viewController;
    EmoticonStoreReportInfo *m_reportInfo;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (id)handleWithParams:(id)a0 AndViewController:(id)a1;
- (void)endWithOk;
- (void)endWithFail;
- (void).cxx_destruct;

@end
