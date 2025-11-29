@class BDImage;

@interface BDASplashGiftMeetViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *beltImage;
@property (retain, nonatomic) BDImage *giftMeetImage;
@property (retain, nonatomic) BDImage *atmosphereAnimationImage;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (void).cxx_destruct;

@end
