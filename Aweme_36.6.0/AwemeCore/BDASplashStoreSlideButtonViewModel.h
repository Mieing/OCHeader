@class BDImage;

@interface BDASplashStoreSlideButtonViewModel : BDASplashComplianceBaseViewModel

@property (retain, nonatomic) BDImage *storeImage;
@property (retain, nonatomic) BDImage *backgroundImage;
@property (retain, nonatomic) BDImage *reputationLevelImage;
@property (retain, nonatomic) BDImage *lightStarImage;
@property (retain, nonatomic) BDImage *unlightedStarImage;
@property (retain, nonatomic) BDImage *flagshipImage;
@property (retain, nonatomic) BDImage *scoreBackgroundImage;
@property (retain, nonatomic) BDImage *scoreImage;
@property (retain, nonatomic) BDImage *liveStoreStatusImage;
@property (retain, nonatomic) BDImage *liveTitleStatusImage;
@property (retain, nonatomic) BDImage *liveHeadImage;

+ (void)downloadResourceWithComplianceModel:(id)a0 downloadBlock:(id /* block */)a1;

- (BOOL)loadResource;
- (id)getViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1;
- (BOOL)checkParams;
- (void).cxx_destruct;

@end
