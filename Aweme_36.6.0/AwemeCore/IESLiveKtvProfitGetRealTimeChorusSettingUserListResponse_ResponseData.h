@class NSMutableArray;

@interface IESLiveKtvProfitGetRealTimeChorusSettingUserListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *topUsersArray;
@property (readonly, nonatomic) unsigned long long topUsersArray_Count;
@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;

+ (id)descriptor;

@end
