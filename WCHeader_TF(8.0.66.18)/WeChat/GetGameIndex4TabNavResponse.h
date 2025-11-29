@class NSMutableArray, BaseResponse;

@interface GetGameIndex4TabNavResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *itemList;

+ (void)initialize;

- (void)setItemList:(id)a0;
- (id)itemList;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
