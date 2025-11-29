@class NSMutableDictionary, NSSet, MJTimelineViewModel, NSIndexPath, MJTimelineLayoutCalculator;

@interface MJTimelineCollectionViewLayout : UICollectionViewLayout

@property (class, readonly, nonatomic) NSIndexPath *musicSegmentPlaceholderViewIndexPath;
@property (class, readonly, nonatomic) NSIndexPath *narrationSegmentPlaceholderViewIndexPath;
@property (class, readonly, nonatomic) NSIndexPath *timelineLeadingAccessoryViewIndexPath;
@property (class, readonly, nonatomic) NSIndexPath *timelineVolumeAccessoryViewIndexPath;
@property (class, readonly, nonatomic) NSIndexPath *OSTRecognitionRetryAccessoryViewIndexPath;

@property (retain, nonatomic) MJTimelineLayoutCalculator *layoutCalc;
@property (retain, nonatomic) NSMutableDictionary *cellAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *trimHandleAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *musicSegmentPlaceholderViewAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *narrationSegmentPlaceholderViewAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *timelineLeadingAccessoryViewAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *timelineVolumeAccessoryViewAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *OSTRecognitionRetryAccessoryViewAttributesByIndexPath;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } trimHandleInsets;
@property (retain, nonatomic) NSSet *transitionSegmentIndexPathsToSendBack;
@property (nonatomic) BOOL isAnimatingForBoundsChange;
@property (nonatomic) struct CGSize { double width; double height; } oldContentSize;
@property (nonatomic) struct CGSize { double width; double height; } deltaContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deltaBounds;
@property (retain, nonatomic) NSMutableDictionary *initialCellLayoutAttributesByIndexPath;
@property (retain, nonatomic) NSMutableDictionary *finalCellLayoutAttributesByIndexPath;
@property (readonly, nonatomic) MJTimelineViewModel *viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffsetOnce;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } timelineViewContentInsets;
@property (retain, nonatomic) NSIndexPath *trimPrepareSegmentIndexPath;

+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;

- (id)layoutAttributesForTrimHandleAtIndexPath:(id)a0;
- (void)trimPrepareSegmentIndexPathDidChange:(id)a0;
- (id)layoutAttributesForMusicSegmentPlaceholderViewAtIndexPath:(id)a0;
- (id)layoutAttributesForNarrationSegmentPlaceholderViewAtIndexPath:(id)a0;
- (id)layoutAttributesForTimelineLeadingAccessoryViewAtIndexPath:(id)a0;
- (id)layoutAttributesForTimelineVolumeAccessoryViewAtIndexPath:(id)a0;
- (id)layoutAttributesForOSTRecognitionRetryAccessoryViewAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForMusicSegmentPlaceholderViewAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForNarrationSegmentPlaceholderViewAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForTimelineLeadingAccessoryViewAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForTimelineVolumeAccessoryViewAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForOSTRecognitionRetryAccessoryViewAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForItemAtIndexPath:(id)a0;
- (id)internalLayoutAttributesForItemAtIndexPath:(id)a0 withContentOffset:(struct CGPoint { double x0; double x1; })a1 maxContentOffsetY:(double)a2;
- (void)boundsWillChangeBeforeInvalidateFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldInvalidateLayoutForBoundsChangeFromSize:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)internalPrepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)internalFinalizeAnimatedBoundsChange;
- (id)internalInitialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)internalFinalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)internalInitialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)internalFinalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)updateDeltaContentSizeIfNeeded:(struct CGSize { double x0; double x1; })a0;
- (id)transformLayoutAttributes:(id)a0 filter:(id /* block */)a1 transformer:(id /* block */)a2;
- (id)initWithViewModel:(id)a0 layoutCalc:(id)a1;
- (void)dealloc;
- (void)invalidateLayoutForScaleChange;
- (void)invalidateLayoutForModeChange;
- (void)prepareLayout;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForTimelineInsetsChange:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;

@end
