@class BDImage, NSString;

@interface BDASplashMedalViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *guideImage;
@property (retain, nonatomic) BDImage *eggsImage;
@property (retain, nonatomic) NSString *eggsAlphaVideoPath;
@property (retain, nonatomic) NSString *guideAlphaVideoPath;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (void).cxx_destruct;

@end
