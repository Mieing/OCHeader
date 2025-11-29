@class NSArray;
@protocol IGListBindingSectionControllerSelectionDelegate, IGListBindingSectionControllerDataSource;

@interface IGListBindingSectionController : IGListSectionController

@property (retain, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) id object;
@property (nonatomic) long long state;
@property (weak, nonatomic) id<IGListBindingSectionControllerDataSource> dataSource;
@property (weak, nonatomic) id<IGListBindingSectionControllerSelectionDelegate> selectionDelegate;

- (id)cellForItemAtIndex:(long long)a0;
- (id)debugDescriptionLines;
- (void)didUpdateToObject:(id)a0;
- (void)didHighlightItemAtIndex:(long long)a0;
- (void)didUnhighlightItemAtIndex:(long long)a0;
- (void)updateAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)didDeselectItemAtIndex:(long long)a0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
