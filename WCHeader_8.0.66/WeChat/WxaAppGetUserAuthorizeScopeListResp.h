@class NSMutableArray, BaseResponse;

@interface WxaAppGetUserAuthorizeScopeListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *wxaItemList;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *allShownScopeList;

+ (void)initialize;

@end
