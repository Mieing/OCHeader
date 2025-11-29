@class NSMutableArray, BaseResponse;

@interface JSAPIGetUserAuthorizeScopeListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *bizItemList;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSMutableArray *allShownScopeList;

+ (void)initialize;

@end
