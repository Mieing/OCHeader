@class NSString, NSMutableArray, BaseResponse;

@interface CreateOpenIMChatRoomResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) NSString *bigHeadimgUrl;
@property (retain, nonatomic) NSString *smallHeadimgUrl;
@property (retain, nonatomic) NSString *appId;

+ (void)initialize;

@end
