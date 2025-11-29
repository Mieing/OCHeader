@class NSMutableArray, BaseResponse;

@interface MMListenVideoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *finderList;
@property (retain, nonatomic) NSMutableArray *listenItemList;

+ (void)initialize;

@end
