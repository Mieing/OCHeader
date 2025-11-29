@class NSMutableArray, BaseResponse;

@interface MMListenBarrageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *barrageList;

+ (void)initialize;

@end
