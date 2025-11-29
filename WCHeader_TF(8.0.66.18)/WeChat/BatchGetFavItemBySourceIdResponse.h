@class NSMutableArray, BaseResponse;

@interface BatchGetFavItemBySourceIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *objectList;

+ (void)initialize;

@end
