@class BDImage, NSMutableDictionary;

@interface BDASplashGoodsCardViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *backgroundImage;
@property (retain, nonatomic) BDImage *guideArrow;
@property (retain, nonatomic) NSMutableDictionary *goodsCardList;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (id)initWithModel:(id)a0 delegate:(id)a1;
- (BOOL)checkParams;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (void).cxx_destruct;

@end
