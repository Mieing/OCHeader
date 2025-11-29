@class NSArray, NSNumber;

@interface AWETeenSearchResultUserResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *userList;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
