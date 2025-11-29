@class NSArray;

@interface IESLiveSearchFriendDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *users;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
