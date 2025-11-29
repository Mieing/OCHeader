@class NSString;

@interface WCPayOverseaTransferGetCurrencyCgiRespObject : NSObject

@property (nonatomic) int m_currency;
@property (retain, nonatomic) NSString *m_currencyUint;
@property (retain, nonatomic) NSString *m_currencyWording;
@property (retain, nonatomic) NSString *m_notice;
@property (retain, nonatomic) NSString *m_noticeUrl;

+ (id)GenFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
