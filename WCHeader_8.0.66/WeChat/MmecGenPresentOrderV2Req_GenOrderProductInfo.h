@class NSString;

@interface MmecGenPresentOrderV2Req_GenOrderProductInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned long long skuId;
@property (nonatomic) unsigned int productCnt;
@property (retain, nonatomic) NSString *promoterKey;
@property (retain, nonatomic) NSString *entranceGmsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sessionItemSerialize64Str;
@property (retain, nonatomic) NSString *preheatId;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
