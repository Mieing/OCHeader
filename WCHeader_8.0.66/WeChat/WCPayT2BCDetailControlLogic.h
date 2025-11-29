@class NSString, WCPayT2BCQueryDetailCgi;
@protocol WCPayT2BCDetailControlLogicDelegate;

@interface WCPayT2BCDetailControlLogic : WCPayControlLogic <WCPayT2BCQueryDetailCgiDelegate> {
    id<WCPayT2BCDetailControlLogicDelegate> _t2bcDetailLogicDelegate;
}

@property (retain, nonatomic) WCPayT2BCQueryDetailCgi *m_queryDetailCgi;
@property (nonatomic) unsigned long long m_fromScene;
@property (nonatomic) unsigned long long m_status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setT2BCDetialControlLogicDelegate:(id)a0;
- (void)dealloc;
- (id)initWithTransferBillId:(id)a0 scene:(unsigned long long)a1;
- (id)initWithTransferBillId:(id)a0 scene:(unsigned long long)a1 status:(unsigned long long)a2;
- (void)startLogic;
- (void)getTransferDetailData;
- (void)OnWCPayT2BCQueryDetailCgiResponseOK:(id)a0;
- (void)OnWCPayT2BCQueryDetailCgiResponseError:(id)a0 errorCode:(unsigned int)a1;
- (void)stopLogic;
- (void)OnWCPayTransferToBankCardPaidSuccessViewControllerBack;
- (void).cxx_destruct;

@end
