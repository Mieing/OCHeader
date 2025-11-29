@class NSArray;

@interface AFDPublishFriendsDontShareListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *dontShareList;
@property (copy, nonatomic) NSArray *relativeList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
