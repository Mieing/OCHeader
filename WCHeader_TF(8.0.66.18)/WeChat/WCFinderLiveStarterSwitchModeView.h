@class NSArray, UIScrollView, WCFinderLiveStarterSwitchModeItem;
@protocol WCFinderLiveStarterSwitchModeDelegate;

@interface WCFinderLiveStarterSwitchModeView : UIView

@property (retain, nonatomic) NSArray *itemArray;
@property (retain, nonatomic) NSArray *cellArray;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCFinderLiveStarterSwitchModeItem *item;
@property (nonatomic) BOOL isPortrait;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (copy, nonatomic) id /* block */ redDotQueryBlock;
@property (copy, nonatomic) id /* block */ redDotExposeBlock;
@property (copy, nonatomic) id /* block */ redDotClickBlock;
@property (weak, nonatomic) id<WCFinderLiveStarterSwitchModeDelegate> delegate;

- (void)createCellArray;
- (id)getCellWithItem:(id)a0 originX:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playAnimation;
- (void)updateCellWithItem:(id)a0 index:(long long)a1 originX:(double)a2;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (double)getCollectionViewCellWidthAtIndexPath:(id)a0;
- (double)itemMargin;
- (double)videoContainerViewPadding;
- (void)initWithLiveStarterSwitchModeItem:(id)a0;
- (void)selectWithLiveModeSubItem:(id)a0;
- (void).cxx_destruct;

@end
