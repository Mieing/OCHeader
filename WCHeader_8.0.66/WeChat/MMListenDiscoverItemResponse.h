@class NSMutableArray, BaseResponse;

@interface MMListenDiscoverItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
