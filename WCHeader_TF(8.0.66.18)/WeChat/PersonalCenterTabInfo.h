@class NSArray, NSNumber;

@interface PersonalCenterTabInfo : NSObject

@property (copy, nonatomic) NSArray *groupList;
@property (retain, nonatomic) NSNumber *interactiveIdentityEnable;

+ (id)makeWithGroupList:(id)a0 interactiveIdentityEnable:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
