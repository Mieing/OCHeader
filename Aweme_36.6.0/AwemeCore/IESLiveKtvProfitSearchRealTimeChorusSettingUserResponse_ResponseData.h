@class NSMutableArray;

@interface IESLiveKtvProfitSearchRealTimeChorusSettingUserResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) BOOL hasMore;

+ (id)descriptor;

@end
