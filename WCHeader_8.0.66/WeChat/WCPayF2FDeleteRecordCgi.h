@class NSString;
@protocol WCPayF2FDeleteRecordCgiDelegate;

@interface WCPayF2FDeleteRecordCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayF2FDeleteRecordCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *billID;
@property (nonatomic) unsigned long long timeStamp;
@property (nonatomic) unsigned long long timeFormat;

- (id)initWithDelegate:(id)a0;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
