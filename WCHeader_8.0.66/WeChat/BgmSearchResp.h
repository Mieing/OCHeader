@class NSMutableArray, BaseResponse;

@interface BgmSearchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSMutableArray *musicList;

+ (void)initialize;

@end
