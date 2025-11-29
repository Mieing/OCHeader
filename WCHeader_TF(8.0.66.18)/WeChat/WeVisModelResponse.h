@class NSMutableArray, BaseResponse;

@interface WeVisModelResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *newConfigList;

+ (void)initialize;

- (void)setNewConfigList:(id)a0;
- (id)newConfigList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
