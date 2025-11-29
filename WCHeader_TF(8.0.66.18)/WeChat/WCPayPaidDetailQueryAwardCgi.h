@class NSString;
@protocol WCPayPaidDetailQueryAwardCgiDelegate;

@interface WCPayPaidDetailQueryAwardCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayPaidDetailQueryAwardCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *awardId;
@property (retain, nonatomic) NSString *sendRecordId;
@property (retain, nonatomic) NSString *userRecordId;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *transactionId;
@property (retain, nonatomic) NSString *activityMchId;
@property (retain, nonatomic) NSString *activityType;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)callErrorDelegate;
- (void).cxx_destruct;

@end
