@class NSMutableArray, BaseResponse;

@interface GetMsgContactListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;

+ (void)initialize;

@end
