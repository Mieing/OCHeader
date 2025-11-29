@class BaseRequest, NSString, NSMutableArray;

@interface ChatRoomTopMsgGetDetailReqeust : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSMutableArray *topIds;

+ (void)initialize;

@end
