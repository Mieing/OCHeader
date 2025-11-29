@class NSArray, NSNumber;

@interface AWEFollowGroupListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *groupsArray;
@property (retain, nonatomic) NSArray *belongGroups;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (retain, nonatomic) NSNumber *limit;

+ (id)groupsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
