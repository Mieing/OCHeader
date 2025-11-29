@class BaseRequest, NSString;

@interface MMBizCommApiGetServiceAppListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSString *tpaCountry;

+ (void)initialize;

- (void)setTpaCountry:(id)a0;
- (id)tpaCountry;
- (void)setLang:(id)a0;
- (id)lang;
- (void)setLimit:(unsigned int)a0;
- (unsigned int)limit;
- (void)setOffset:(unsigned int)a0;
- (unsigned int)offset;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
