@class NSString, NSMutableArray, BaseResponse;

@interface GetMFriendResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int count;
@property (retain, nonatomic) NSMutableArray *friendList;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

@end
