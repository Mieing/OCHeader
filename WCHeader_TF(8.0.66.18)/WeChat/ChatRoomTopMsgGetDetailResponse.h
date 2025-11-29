@class NSData, NSMutableArray, BaseResponse;

@interface ChatRoomTopMsgGetDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *topMsgInfo;
@property (retain, nonatomic) NSMutableArray *unfoundIds;
@property (retain, nonatomic) NSMutableArray *overLimitIds;

+ (void)initialize;

@end
