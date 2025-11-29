@class NSNumber, NSArray;

@interface AFDAilabContactUserListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *recentMentionList;
@property (retain, nonatomic) NSArray *userList;

+ (id)userListJSONTransformer;
+ (id)recentMentionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
