@class NSMutableArray, BaseResponse;

@interface GetContactLabelListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int labelCount;
@property (retain, nonatomic) NSMutableArray *labelPairList;

+ (void)initialize;

- (void)setLabelPairList:(id)a0;
- (id)labelPairList;
- (void)setLabelCount:(unsigned int)a0;
- (unsigned int)labelCount;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
