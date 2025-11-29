@class WebRecordDB;

@interface WebviewJSEventHandler_recordHistory : WebviewJSEventHandlerBase

@property (retain, nonatomic) WebRecordDB *db;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void).cxx_destruct;

@end
