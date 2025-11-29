@class NSString;
@protocol WCPayGetF2FReceiveDetailDataCgiDelegate;

@interface WCPayGetF2FReceiveDetailDataCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayGetF2FReceiveDetailDataCgiDelegate> cgiDelegate;
@property (nonatomic) unsigned long long fromTimeStamp;
@property (nonatomic) unsigned long long timeFormat;
@property (copy, nonatomic) NSString *lastBillID;
@property (nonatomic) unsigned int maxRecordPerTime;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
