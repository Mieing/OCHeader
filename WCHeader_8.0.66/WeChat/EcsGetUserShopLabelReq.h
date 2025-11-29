@class BaseRequest, NSString;

@interface EcsGetUserShopLabelReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nextKey;
@property (nonatomic) unsigned int pageSize;

+ (void)initialize;

- (void)setPageSize:(unsigned int)a0;
- (unsigned int)pageSize;
- (void)setNextKey:(id)a0;
- (id)nextKey;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
