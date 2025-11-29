@class NSData, NSMutableArray, BaseResponse;

@interface CheckResUpdateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *res;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) unsigned int nextTime;

+ (void)initialize;

- (void)setNextTime:(unsigned int)a0;
- (unsigned int)nextTime;
- (void)setContext:(id)a0;
- (id)context;
- (void)setRes:(id)a0;
- (id)res;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
