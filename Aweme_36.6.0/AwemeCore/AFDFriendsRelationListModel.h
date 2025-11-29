@class NSArray;

@interface AFDFriendsRelationListModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *relationList;

+ (id)relationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
