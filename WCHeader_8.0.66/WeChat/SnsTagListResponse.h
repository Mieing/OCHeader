@class NSString, NSMutableArray, BaseResponse;

@interface SnsTagListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int opCode;
@property (retain, nonatomic) NSString *tagListMd5;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int state;

+ (void)initialize;

- (void)setState:(unsigned int)a0;
- (unsigned int)state;
- (void)setList:(id)a0;
- (id)list;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setTagListMd5:(id)a0;
- (id)tagListMd5;
- (void)setOpCode:(unsigned int)a0;
- (unsigned int)opCode;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
