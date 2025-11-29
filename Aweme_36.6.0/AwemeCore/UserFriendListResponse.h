@class UserFriendListResponseData;

@interface UserFriendListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UserFriendListResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
