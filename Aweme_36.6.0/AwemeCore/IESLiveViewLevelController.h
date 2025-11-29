@class NSArray, NSMapTable, NSMutableDictionary, UIView, NSNumber, NSString;

@interface IESLiveViewLevelController : NSObject

@property (retain, nonatomic) NSMapTable *viewTable;
@property (copy, nonatomic) NSArray *sortedLevels;
@property (retain, nonatomic) NSNumber *undefined;
@property (weak, nonatomic) UIView *addingView;
@property (retain, nonatomic) NSMutableDictionary *reuseViewMap;
@property (nonatomic) BOOL fixEnable;
@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *levelName;

- (void)addSubview:(id)a0 identifier:(id)a1;
- (id)initWithLevelName:(id)a0 sortedLevels:(id)a1;
- (void)removeSubview:(id)a0;
- (void)addSubview:(id)a0 identifier:(id)a1 reuse:(BOOL)a2;
- (id)reuseViewForIdentifier:(id)a0;
- (id)getReuseSubviews;
- (id)initWithLevelName:(id)a0;
- (BOOL)disableViewSorted;
- (void)insertSubview:(id)a0 identifier:(id)a1;
- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (long long)indexOfIdentifier:(id)a0;
- (BOOL)containsSubview:(id)a0;

@end
