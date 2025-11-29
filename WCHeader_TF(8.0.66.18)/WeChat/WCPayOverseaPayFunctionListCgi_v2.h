@class NSString, WCPayWalletGetAllFunctionCgi;
@protocol WCPayOverseaPayFunctionListCgiDelegate;

@interface WCPayOverseaPayFunctionListCgi_v2 : NSObject <WCPayWalletGetAllFunctionCgiDelegate>

@property (weak, nonatomic) id<WCPayOverseaPayFunctionListCgiDelegate> m_delegate;
@property (nonatomic) unsigned int m_tpaCountry;
@property (nonatomic) BOOL m_isCgiEnd;
@property (retain, nonatomic) WCPayWalletGetAllFunctionCgi *m_getAllFunctionCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)oldRespFrom:(id)a0;
+ (id)cacheObjectWithTpaCountry:(unsigned int)a0;

- (id)initWithDelegate:(id)a0 TpaCountry:(unsigned int)a1;
- (BOOL)isCgiEnd;
- (void)startRequest;
- (void)callErrorDelegateWithErrorCode:(int)a0 ErrorMsg:(id)a1;
- (void)callOkDelegateWithRespObject:(id)a0;
- (void)onGetWalletAllFunctionCgiResp:(id)a0;
- (void).cxx_destruct;

@end
