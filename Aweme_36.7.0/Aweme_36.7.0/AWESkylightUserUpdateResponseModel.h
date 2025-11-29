@class NSArray;

@interface AWESkylightUserUpdateResponseModel : AWEBaseApiModel

@property (nonatomic) BOOL noUpdate;
@property (nonatomic) long long updateUserCount;
@property (nonatomic) long long updateItemCount;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSArray *highValueUserList;
@property (nonatomic) long long activeLevel;
@property (nonatomic) BOOL specialFollow;

+ (id)userListJSONTransformer;
+ (id)highValueUserListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSameModelForRefreshWithOtherModel:(id)a0;
- (BOOL)isSameUserList:(id)a0 otherUserList:(id)a1;
- (void).cxx_destruct;

@end
