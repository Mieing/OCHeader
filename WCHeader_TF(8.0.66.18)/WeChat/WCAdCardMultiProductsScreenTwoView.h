@class NSArray, NSString, NSMutableArray, MMUILabel;

@interface WCAdCardMultiProductsScreenTwoView : WCAdCardMultiProductsBaseView

@property (retain, nonatomic) NSArray *imageUrls;
@property (retain, nonatomic) NSString *productDesc;
@property (retain, nonatomic) NSMutableArray *imageViews;
@property (retain, nonatomic) MMUILabel *productDescView;
@property (retain, nonatomic) NSMutableArray *imagesOriCenter;
@property (nonatomic) struct CGPoint { double x; double y; } descOriCenter;

+ (double)calcHeightWithMaxWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageUrls:(id)a1 productDesc:(id)a2;
- (void)generateSubviews;
- (void)resizeSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)generateImageViews;
- (id)generateImageViewWithUrl:(id)a0;
- (void)adaptImageLayoutInfoWithMaxWidth:(double)a0 imageWidth:(double *)a1 imageGap:(double *)a2;
- (id)getObjectsToDisappear;
- (id)getObjectsToAppear;
- (void).cxx_destruct;

@end
