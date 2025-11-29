@class NSString, NSArray, OMCTransitionSegment;

@interface MJTransitionInspectorViewModel : MJSegmentInspectorViewModel

@property (retain, nonatomic) OMCTransitionSegment *transitionSegment;
@property (retain, nonatomic) NSString *originalTransitionID;
@property (retain, nonatomic) NSString *selectedTransitionID;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } overlappingTransitionDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } nonOverlappingTransitionDuration;
@property (copy, nonatomic) id /* block */ updateSelectionHandler;

- (id)initWithSegment:(id)a0 type:(unsigned long long)a1;
- (id)itemsWithDefaultItem;
- (void)dealloc;
- (id)title;
- (id)adjustableProtocols;
- (BOOL)hasChanges;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllEnabled;
- (void)notifyDidCancel;
- (void)setTransitionToOriginal;
- (void)notifyDidApplyToAll:(id)a0;
- (void)loadItemsWithCompletion:(id /* block */)a0;
- (void)handleMaterialPackRequestFailedWithCategories:(id)a0 error:(id)a1;
- (id)itemsWithMaterialCategories:(id)a0;
- (void)handleSelectItemAtIndexPath:(id)a0;
- (void)loadMaterial:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)cellItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
