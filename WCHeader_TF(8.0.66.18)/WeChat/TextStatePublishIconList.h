@class NSMutableArray, NSMutableDictionary;

@interface TextStatePublishIconList : NSObject

@property (retain, nonatomic) NSMutableArray *groupArray;
@property (retain, nonatomic) NSMutableDictionary *descriptionToIconDict;

- (id)initWithStorage:(id)a0 maxShowCount:(unsigned long long)a1;
- (id)iconForDescription:(id)a0;
- (void)insertGroup:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeGroupByIndex:(unsigned long long)a0;
- (void)removeCustomIcon;
- (void)addIconIntoGroup:(id)a0 groupIndex:(long long)a1 iconIndexInGroup:(long long)a2;
- (void).cxx_destruct;

@end
