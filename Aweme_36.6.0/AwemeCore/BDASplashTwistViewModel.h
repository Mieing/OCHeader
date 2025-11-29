@class BDImage;

@interface BDASplashTwistViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *progressImage;
@property (retain, nonatomic) BDImage *guideImage;
@property (retain, nonatomic) BDImage *buttonImage;
@property (retain, nonatomic) BDImage *guideSemiImage;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (long long)getModelType;
- (void).cxx_destruct;

@end
