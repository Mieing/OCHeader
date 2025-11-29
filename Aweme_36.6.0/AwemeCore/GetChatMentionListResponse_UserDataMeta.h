@class NSMutableArray, HTSLiveUser;

@interface GetChatMentionListResponse_UserDataMeta : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSMutableArray *userTagArray;
@property (readonly, nonatomic) unsigned long long userTagArray_Count;

+ (id)descriptor;

@end
