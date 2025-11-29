@class NSString;

@interface MmecBatchGetProductCardReq_Product : WXPBGeneratedMessage

@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *productCardKey;
@property (retain, nonatomic) NSString *detailPath;
@property (retain, nonatomic) NSString *gmsgId;
@property (retain, nonatomic) NSString *lastGmsgId;
@property (retain, nonatomic) NSString *passBuffer;

+ (void)initialize;

@end
