@class NSString, NSBundle, UIView;
@protocol IGListSingleSectionControllerDelegate;

@interface IGListSingleSectionController : IGListSectionController <IGListSupplementaryViewSource>

@property (retain, nonatomic) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *nibName;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) id /* block */ configureBlock;
@property (readonly, nonatomic) id /* block */ sizeBlock;
@property (retain, nonatomic) id item;
@property (weak, nonatomic) id<IGListSingleSectionControllerDelegate> selectionDelegate;

- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (id)cellForItemAtIndex:(long long)a0;
- (void)didUpdateToObject:(id)a0;
- (id)initWithCellClass:(Class)a0 configureBlock:(id /* block */)a1 sizeBlock:(id /* block */)a2;
- (void)didDeselectItemAtIndex:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 configureBlock:(id /* block */)a2 sizeBlock:(id /* block */)a3;
- (id)initWithStoryboardCellIdentifier:(id)a0 configureBlock:(id /* block */)a1 sizeBlock:(id /* block */)a2;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
