@class NSData, UserMgrBaseResponse, NSMutableArray, BaseResponse;

@interface SearchUserAuthResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) UserMgrBaseResponse *usermgrBaseresp;
@property (retain, nonatomic) NSMutableArray *authApp;
@property (retain, nonatomic) NSData *nextPageData;
@property (nonatomic) unsigned int nextPageFlag;

+ (void)initialize;

@end
