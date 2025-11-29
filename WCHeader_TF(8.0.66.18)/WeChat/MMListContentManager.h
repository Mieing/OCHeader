@class UIColor, NSString, MMListContentView, NSMutableArray;

@interface MMListContentManager : NSObject <MMListContentDataSource, MMListContentUIDelegate>

@property (retain, nonatomic) NSMutableArray *cellArray;
@property (retain, nonatomic) MMListContentView *listContentView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonManager;

- (id)init;
- (id)assembleListView;
- (id)assembleListViewAndClear;
- (id)listContentViewForCells:(id)a0;
- (id)singleCellViewWithConfig:(id)a0;
- (void)initCellArrayIfNeeded;
- (void)addCell:(id)a0;
- (void)addCells:(id)a0;
- (void)insertCell:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)removeCell:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (id)labelWithText:(id)a0;
- (id)subtitleLabelWithText:(id)a0;
- (id)descriptionLabelWithText:(id)a0;
- (id)accessoryControlWithTarget:(id)a0 action:(SEL)a1 type:(long long)a2 isModeOn:(BOOL)a3;
- (void).cxx_destruct;

@end
