@class AWEUserWorkCollectionViewComponentCell, NSString, AWERLComponentContainer, AWEUserWorkCellBaseComponent, NSIndexPath;

@interface AWEUserWorkCellViewModel : NSObject <AWEUserWorkCellViewModelServiceProtocol, AWERLComponentContainerDelegate>

@property (retain, nonatomic) AWEUserWorkCellBaseComponent *rootComponent;
@property (retain, nonatomic) AWERLComponentContainer *componentTree;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double width;
@property (weak, nonatomic) AWEUserWorkCollectionViewComponentCell *currentCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadUserPageAdapterClass;

- (void)componentContainer:(id)a0 changeBoundsToSize:(struct CGSize { double x0; double x1; })a1;
- (void)performPadUILayoutUpdate:(id)a0;
- (void)showLongPressPanel;
- (id)aAWEPadUserPageAdapter;
- (struct CGSize { double x0; double x1; })awe_sizeForPostWorkItemOfWaterfallLayout:(id)a0 indexPath:(id)a1 screenWidth:(double)a2;
- (id)initWithData:(id)a0 componentConfig:(id)a1;
- (id)accessibilityLabelWith:(id)a0;
- (void)refreshWithWidth:(double)a0 indexPath:(id)a1;
- (void)renderWithContainer:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (void)markDetachedFromContainer;
- (void).cxx_destruct;
- (id)containerView;
- (id)cellContext;

@end
