@class PAGComposition, PAGView, FinderLiveSyncEcCouponInfoResp_WidgetInfo, UILabel;

@interface MMFinderLiveCouponsWidgetView : UIView

@property (retain, nonatomic) FinderLiveSyncEcCouponInfoResp_WidgetInfo *info;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isNormalStyle;
@property (retain, nonatomic) PAGComposition *enterPAG;
@property (retain, nonatomic) PAGComposition *weakenPAG;

+ (void)loadWidgetWithInfo:(id)a0 completion:(id /* block */)a1;
+ (void)updatePAG:(id)a0 withInfo:(id)a1;

- (id)initWithInfo:(id)a0;
- (void)enter;
- (void)prepareToNormalState;
- (void)toNormalStyleWithCompletion:(id /* block */)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
