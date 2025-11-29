@class UIViewController;
@protocol IGListWorkingRangeDelegate, IGListSupplementaryViewSource, IGListScrollDelegate, IGListCollectionContext, IGListTransitionDelegate, IGListDisplayDelegate;

@interface IGListSectionController : NSObject

@property (weak, nonatomic) id<IGListCollectionContext> collectionContext;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long section;
@property (nonatomic) BOOL isFirstSection;
@property (nonatomic) BOOL isLastSection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (weak, nonatomic) id<IGListSupplementaryViewSource> supplementaryViewSource;
@property (weak, nonatomic) id<IGListDisplayDelegate> displayDelegate;
@property (weak, nonatomic) id<IGListWorkingRangeDelegate> workingRangeDelegate;
@property (weak, nonatomic) id<IGListScrollDelegate> scrollDelegate;
@property (weak, nonatomic) id<IGListTransitionDelegate> transitionDelegate;

- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (void)didHighlightItemAtIndex:(long long)a0;
- (void)didUnhighlightItemAtIndex:(long long)a0;
- (BOOL)canMoveItemAtIndex:(long long)a0;
- (void)didDeselectItemAtIndex:(long long)a0;
- (BOOL)canMoveItemAtIndex:(long long)a0 toIndex:(long long)a1;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;
- (void)moveObjectFromIndex:(long long)a0 toIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
