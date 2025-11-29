@class NSString, UrlJumpInfo;

@interface LctOperationProductInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *profit;
@property (retain, nonatomic) NSString *profitDesc;
@property (retain, nonatomic) UrlJumpInfo *url;
@property (retain, nonatomic) NSString *spid;
@property (retain, nonatomic) NSString *fundCode;
@property (retain, nonatomic) NSString *productCode;
@property (retain, nonatomic) NSString *unionId;

+ (void)initialize;

@end
