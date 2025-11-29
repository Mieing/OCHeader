@class BDImage, NSDictionary;

@interface BDASplashInteractiveViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *guideImage;
@property (retain, nonatomic) BDImage *eggsImage;
@property (copy, nonatomic) NSDictionary *eggsVideoDict;
@property (nonatomic) struct CGSize { double width; double height; } originalSize;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (BOOL)checkParams;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (void).cxx_destruct;

@end
