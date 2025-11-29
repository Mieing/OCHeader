@class NSArray, NSNumber, NSMutableArray;

@interface IESLiveShortTouchGroup : NSObject

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) NSNumber *priority;
@property (retain, nonatomic) NSMutableArray *allTypes;
@property (copy, nonatomic) NSArray *allItems;

+ (id)groupWithPriority:(id)a0;

- (void)insertToFont:(id)a0;
- (void).cxx_destruct;
- (long long)removeItem:(id)a0;
- (void)reloadItems;

@end
