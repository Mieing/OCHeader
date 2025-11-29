@interface TransferPhoneGetHisRcvrsResp_HisRcvr_RcvrId : WXPBGeneratedMessage

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int payer;
@property (nonatomic) unsigned int rcvr;
@property (nonatomic) unsigned long long lastTransTime;
@property (nonatomic) unsigned long long ts;

+ (void)initialize;

@end
