@class NSNumber, NSString;

@interface AWEFollowGroupCategoryModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupDesc;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long category;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isDefaulGroup;
- (void).cxx_destruct;

@end
