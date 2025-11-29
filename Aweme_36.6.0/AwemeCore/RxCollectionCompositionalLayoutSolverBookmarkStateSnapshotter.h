@class RxCollectionSectionSolutionBookmark;

@interface RxCollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject {
    RxCollectionSectionSolutionBookmark *_bookmark;
}

@property (readonly, nonatomic) long long originalSectionIndex;

- (id)initWithBookmark:(id)a0 originalSectionIndex:(long long)a1;
- (void)applyStateToBookmark:(id)a0 effectiveContentInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;

@end
