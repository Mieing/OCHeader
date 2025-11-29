@class NSMutableArray, BaseResponse;

@interface GetLiveOnlineStateByRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *userOnlineStateList;

+ (void)initialize;

@end
