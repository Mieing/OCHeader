@class NSString, NSMutableArray, BaseResponse;

@interface GetAssociateChatRoomManageInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *intro;
@property (retain, nonatomic) NSMutableArray *noticeList;
@property (retain, nonatomic) NSString *bindTpUsername;
@property (retain, nonatomic) NSString *title;

+ (void)initialize;

@end
