@interface RxCollectionLayoutSectionGeometryTranslator : NSObject {
    int _layoutAxis;
    BOOL _layoutRTL;
    struct RxDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _supplementaryInsets;
    struct RxDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _sectionInsets;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } auxillaryHostContentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveContentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } effectiveFrame;

- (id)initWithContentSize:(struct CGSize { double x0; double x1; })a0 layoutAxis:(int)a1 layoutRTL:(BOOL)a2 sectionInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3 supplementaryInsets:(struct RxDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForSectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)__computeFrames;
- (id)description;

@end
