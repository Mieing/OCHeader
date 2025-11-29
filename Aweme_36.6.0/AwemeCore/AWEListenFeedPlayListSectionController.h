@class AWEListenFeedPlayModel, AWEListenFeedContext;

@interface AWEListenFeedPlayListSectionController : AWEBaseListSectionController

@property (retain, nonatomic) AWEListenFeedPlayModel *playModel;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL isSupportedExtendStyleEnterFrom;
@property (copy, nonatomic) id /* block */ didClickDeleteBlock;
@property (copy, nonatomic) id /* block */ didLongPressCell;
@property (copy, nonatomic) id /* block */ cellSwipeToDeleteBlock;
@property (retain, nonatomic) AWEListenFeedContext *context;

+ (Class)sectionViewModelClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)handleConnectionChanged:(id)a0;
- (BOOL)enableMovementAtIndex:(long long)a0 model:(id)a1;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)trackListenListVideoShow:(id)a0;
- (void)handleCellLongPressEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)handleCellDeleteEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)handleCellSwipeToDeleteEvent:(id)a0 model:(id)a1 userInfo:(id)a2;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (void)updateContext:(id)a0;

@end
