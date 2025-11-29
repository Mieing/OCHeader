@protocol WCPayOverseaPayFunctionListCgiDelegate;

@interface WCPayOverseaPayFunctionListCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayOverseaPayFunctionListCgiDelegate> m_delegate;
@property (nonatomic) unsigned int m_tpaCountry;
@property (nonatomic) BOOL m_isCgiEnd;

- (id)initWithDelegate:(id)a0 TpaCountry:(unsigned int)a1;
- (void)dealloc;
- (BOOL)isCgiEnd;
- (void)startRequest;
- (void)callErrorDelegateWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (void)callOkDelegateWithRespObject:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
