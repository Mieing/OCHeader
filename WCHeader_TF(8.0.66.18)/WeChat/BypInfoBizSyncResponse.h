@class NSMutableArray, BaseResponse;

@interface BypInfoBizSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int respContinueFlag;
@property (nonatomic) unsigned long long respSynckeyValue;
@property (retain, nonatomic) NSMutableArray *syncItemList;
@property (nonatomic) BOOL reset;

+ (void)initialize;

- (void)setReset:(BOOL)a0;
- (BOOL)reset;
- (void)setSyncItemList:(id)a0;
- (id)syncItemList;
- (void)setRespSynckeyValue:(unsigned long long)a0;
- (unsigned long long)respSynckeyValue;
- (void)setRespContinueFlag:(unsigned int)a0;
- (unsigned int)respContinueFlag;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
