@class NSMutableArray, BaseResponse;

@interface GetUserContactListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactList;

+ (void)initialize;

@end
