@class BaseRequest, NSMutableArray;

@interface BatchDelFavItemBySourceIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *filtersAndCtx;

+ (void)initialize;

@end
