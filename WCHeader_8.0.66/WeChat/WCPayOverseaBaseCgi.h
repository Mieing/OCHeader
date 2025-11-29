@protocol WCPayOverseaBaseCgiDelegate;

@interface WCPayOverseaBaseCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayOverseaBaseCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)startRequestWithCgiId:(unsigned int)a0 Data:(id)a1;
- (void)startNotNotifyRequstWithCgiId:(unsigned int)a0 Data:(id)a1;
- (void)startRequestWithCgiId:(unsigned int)a0 Data:(id)a1 isNeedNotify:(BOOL)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)callErrorDelegateWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (void)callOkDelegateWithErrorType:(int)a0 ErrorMsg:(id)a1 Dictionary:(id)a2;
- (void).cxx_destruct;

@end
