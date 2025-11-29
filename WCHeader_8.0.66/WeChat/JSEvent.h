@class NSString, NSMutableDictionary, JSEventInvokeContext;
@protocol JSEventHandler;

@interface JSEvent : NSObject {
    NSMutableDictionary *m_params;
    NSString *m_callbackID;
    NSString *m_funcName;
}

@property (weak, nonatomic) id<JSEventHandler> m_delegate;
@property (copy, nonatomic) id /* block */ kvReportBlock;
@property (copy, nonatomic) id /* block */ eventCompleteBlock;
@property (retain, nonatomic) JSEventInvokeContext *eventInvokeContext;

- (id)initWithDelegate:(id)a0 parameters:(id)a1;
- (void)setDelegate:(id)a0;
- (void)setCallbackID:(id)a0;
- (void)setFuncName:(id)a0;
- (id)getFuncName;
- (id)getParams;
- (id)getCallbackID;
- (id)webviewController;
- (void)endWithResutl:(id)a0;
- (void)endWithError:(id)a0;
- (void)endWithError:(id)a0 andDescription:(id)a1;
- (void)endWithError:(id)a0 andDescription:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;

@end
