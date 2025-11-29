@class NSMutableArray, BaseResponse;

@interface ManageFinderMemberUserResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSMutableArray *retMsg;

+ (void)initialize;

@end
