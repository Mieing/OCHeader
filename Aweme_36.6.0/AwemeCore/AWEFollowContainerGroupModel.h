@class NSString;

@interface AWEFollowContainerGroupModel : NSObject

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) unsigned long long category;

- (id)initWithGroupCategoryModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCustomGroup;

@end
