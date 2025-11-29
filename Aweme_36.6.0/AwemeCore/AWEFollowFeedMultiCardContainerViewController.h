@class NSMutableArray, AWEFollowFeedMultiCardConfig;
@protocol AWEFollowFeedMultiCardDragContainerDataSource, AWEFollowFeedMultiCardContainerDelegate;

@interface AWEFollowFeedMultiCardContainerViewController : UIViewController

@property (retain, nonatomic) NSMutableArray *cards;
@property (nonatomic) long long direction;
@property (nonatomic) long long loadedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstCardFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastCardFrame;
@property (nonatomic) struct CGPoint { double x; double y; } cardCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } lastCardTransform;
@property (retain, nonatomic) AWEFollowFeedMultiCardConfig *config;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (weak, nonatomic) id<AWEFollowFeedMultiCardDragContainerDataSource> dataSource;
@property (weak, nonatomic) id<AWEFollowFeedMultiCardContainerDelegate> delegate;
@property (nonatomic) BOOL isMoving;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)initWithCardConfig:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cardInitFrame;
- (void)handleResetLayoutSubViews;
- (void)handleResetLayoutSubViewsCompleted;
- (double)displayScaleAtIndex:(long long)a0;
- (void)reloadDataWithClean:(BOOL)a0;
- (void)resetLayoutSubviews:(BOOL)a0;
- (id)getCurrentShowCardView;
- (long long)getCurrentShowCardViewIndex;
- (void)reloadDataWithCurrentIndex;
- (void)removeCardViewForDirection:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)resetData;
- (void)setupSubviews;
- (void)handleTapGesture:(id)a0;
- (void)recordFrame:(id)a0;

@end
