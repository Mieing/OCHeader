@class NSArray;

@interface AFDFriendsUserInformationModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *friendsInfoList;
@property (copy, nonatomic) NSArray *orginFilteredUserList;
@property (copy, nonatomic) NSArray *filteredUserList;

+ (id)friendsInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
