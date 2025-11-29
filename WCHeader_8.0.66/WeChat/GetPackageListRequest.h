@class BaseRequest, NSMutableArray;

@interface GetPackageListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int flag;

+ (void)initialize;

- (void)setFlag:(unsigned int)a0;
- (unsigned int)flag;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setList:(id)a0;
- (id)list;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
