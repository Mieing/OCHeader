@class NSString;

@interface WCPayOverseaTransferOrderResp : NSObject

@property (retain, nonatomic) NSString *m_payUrl;
@property (retain, nonatomic) NSString *m_tradeUrl;
@property (nonatomic) int m_transferNum;
@property (nonatomic) int m_transferType;

+ (id)GenFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
