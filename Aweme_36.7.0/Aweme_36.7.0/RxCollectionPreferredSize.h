@class RxCollectionLayoutSize;

@interface RxCollectionPreferredSize : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, nonatomic) RxCollectionLayoutSize *layoutSize;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (retain, nonatomic) id additionalData;

+ (id)preferredSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2;

- (id)initWithOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2 additionalData:(id)a3;
- (id)preferredSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0 layoutSize:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end
