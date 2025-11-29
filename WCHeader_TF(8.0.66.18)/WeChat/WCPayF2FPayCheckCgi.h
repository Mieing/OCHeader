@class NSString;
@protocol WCPayF2FPayCheckCgiDelegate;

@interface WCPayF2FPayCheckCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayF2FPayCheckCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *f2fId;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *extendStr;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (nonatomic) unsigned int amount;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
