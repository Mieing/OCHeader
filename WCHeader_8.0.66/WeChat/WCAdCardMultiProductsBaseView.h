@protocol WCAdCardMultiProductsScreenDelegate;

@interface WCAdCardMultiProductsBaseView : MMUIView

@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (weak, nonatomic) id<WCAdCardMultiProductsScreenDelegate> delegate;

- (void)layoutSubviews;
- (void)resizeSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)saveCurrentCenterWith:(id)a0;
- (void)restorePrevioisCenterWith:(id)a0;
- (void).cxx_destruct;

@end
