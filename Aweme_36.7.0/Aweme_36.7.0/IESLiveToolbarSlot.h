@class NSString, NSArray;

@interface IESLiveToolbarSlot : NSObject

@property (copy, nonatomic) NSString *slotName;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *expandItem;
@property (copy, nonatomic) NSArray *firstPatternItem;
@property (copy, nonatomic) NSArray *secondPatternItem;
@property (copy, nonatomic) NSArray *thirdPatternItem;

+ (id)instanceWithDict:(id)a0;

- (BOOL)compareItemIndexWith:(id)a0 biggerOrEqualThanItem:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)indexForItem:(id)a0;

@end
