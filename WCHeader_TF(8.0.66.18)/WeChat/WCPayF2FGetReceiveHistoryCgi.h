@protocol WCPayF2FGetReceiveHistoryCgiDelegate;

@interface WCPayF2FGetReceiveHistoryCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayF2FGetReceiveHistoryCgiDelegate> cgiDelegate;
@property (nonatomic) unsigned long long fromTimeStamp;
@property (nonatomic) unsigned long long timeFormat;
@property (nonatomic) unsigned long long chooseFlag;
@property (nonatomic) unsigned long long loadMoreDirection;
@property (nonatomic) unsigned int maxItemPerTime;
@property (nonatomic) unsigned int svrRettryNum;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
