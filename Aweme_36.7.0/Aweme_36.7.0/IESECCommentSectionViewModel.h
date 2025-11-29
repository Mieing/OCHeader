@class NSArray, NSMutableArray;

@interface IESECCommentSectionViewModel : NSObject <IGListDiffable>

@property (retain, nonatomic) NSMutableArray *groupObjects;
@property (retain, nonatomic) NSMutableArray *itemObjects;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) NSArray *items;
@property (copy, nonatomic) id /* block */ shouldAppendGroup;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)removeItemsWithGroup:(id)a0;
- (void)appendGroups:(id)a0;
- (void)appendGroup:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
