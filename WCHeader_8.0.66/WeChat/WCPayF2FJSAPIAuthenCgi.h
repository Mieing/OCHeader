@class NSString;
@protocol WCPayF2FJSAPIAuthCgiDelegate;

@interface WCPayF2FJSAPIAuthenCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayF2FJSAPIAuthCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *noncestr;
@property (retain, nonatomic) NSString *timeStamp;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)callDelegateWithRespRetcode:(int)a0 retmsg:(id)a1;
- (void).cxx_destruct;

@end
