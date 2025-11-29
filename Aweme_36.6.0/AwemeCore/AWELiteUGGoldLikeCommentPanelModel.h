@class NSString, NSArray;

@interface AWELiteUGGoldLikeCommentPanelModel : AWELiteBaseApiModel

@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *itemRecordToken;
@property (copy, nonatomic) NSArray *userList;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
