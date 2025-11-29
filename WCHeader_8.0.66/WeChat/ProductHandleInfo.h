@class ReturnInfo, ExchangeInfo;

@interface ProductHandleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int handleType;
@property (retain, nonatomic) ReturnInfo *returnInfo;
@property (retain, nonatomic) ExchangeInfo *exchangeInfo;

+ (void)initialize;

@end
