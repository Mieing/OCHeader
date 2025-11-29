@class NSArray;

@interface PersonalCenterGroupInfo : NSObject

@property (copy, nonatomic) NSArray *cellList;

+ (id)makeWithCellList:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
