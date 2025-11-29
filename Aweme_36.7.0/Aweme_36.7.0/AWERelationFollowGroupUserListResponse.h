@class NSArray;

@interface AWERelationFollowGroupUserListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
