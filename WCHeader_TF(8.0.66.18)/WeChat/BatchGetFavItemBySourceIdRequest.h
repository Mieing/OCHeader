@class BaseRequest, NSMutableArray;

@interface BatchGetFavItemBySourceIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *filters;

+ (void)initialize;

@end
