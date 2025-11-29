@class NSMutableArray, BaseResponse;

@interface BatchGetFavItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *objectList;

+ (void)initialize;

@end
