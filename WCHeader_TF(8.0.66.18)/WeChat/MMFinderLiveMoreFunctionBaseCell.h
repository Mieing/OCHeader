@class NSIndexPath, MMFinderLiveMoreFunctionItem;
@protocol MMFinderLiveMoreFunctionBaseCellDelegate;

@interface MMFinderLiveMoreFunctionBaseCell : UITableViewCell

@property (retain, nonatomic) MMFinderLiveMoreFunctionItem *item;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) unsigned long long rectCorner;
@property (nonatomic) BOOL showRedDot;
@property (weak, nonatomic) id<MMFinderLiveMoreFunctionBaseCellDelegate> delegate;
@property (nonatomic) BOOL layoutInFullWidth;

+ (id)identifier;

- (void)updateCellWithItem:(id)a0;
- (void)updateCellIndexPath:(id)a0;
- (void)updateCellWithRectCorner:(unsigned long long)a0;
- (void)applyHighlightAnimation;
- (void)highlightAnimationWithColor:(id)a0 contentView:(id)a1;
- (void).cxx_destruct;

@end
