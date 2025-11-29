@class NSMutableArray, BaseResponse;

@interface GetPackageListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int svrCount;
@property (nonatomic) unsigned int type;

+ (void)initialize;

- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setSvrCount:(unsigned int)a0;
- (unsigned int)svrCount;
- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setList:(id)a0;
- (id)list;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
