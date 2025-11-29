@class NSMutableArray, BaseResponse;

@interface GetOldAcctFriendResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *friends;
@property (nonatomic) BOOL continueFlag;

+ (void)initialize;

@end
