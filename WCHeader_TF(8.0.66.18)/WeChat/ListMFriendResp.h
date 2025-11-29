@class NSString, NSMutableArray, BaseResponse;

@interface ListMFriendResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;
@property (nonatomic) unsigned int mobileCount;
@property (retain, nonatomic) NSMutableArray *mobileInfo;
@property (nonatomic) unsigned int emailCount;
@property (retain, nonatomic) NSMutableArray *emailInfo;

+ (void)initialize;

@end
