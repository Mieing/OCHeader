@class NSMutableArray, BaseResponse;

@interface FinderLiveGetRedPacketInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *redpacketInfoList;

+ (void)initialize;

@end
