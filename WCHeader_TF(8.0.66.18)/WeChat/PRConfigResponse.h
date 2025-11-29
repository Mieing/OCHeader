@class PRRespNode, NSString, NSMutableArray, BaseResponse;

@interface PRConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PRRespNode *pr;
@property (retain, nonatomic) NSString *baseid;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableArray *resplist;
@property (nonatomic) unsigned int prerrcode;

+ (void)initialize;

- (void)setPrerrcode:(unsigned int)a0;
- (unsigned int)prerrcode;
- (void)setResplist:(id)a0;
- (id)resplist;
- (void)setType:(id)a0;
- (id)type;
- (void)setPid:(id)a0;
- (id)pid;
- (void)setBaseid:(id)a0;
- (id)baseid;
- (void)setPr:(id)a0;
- (id)pr;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
