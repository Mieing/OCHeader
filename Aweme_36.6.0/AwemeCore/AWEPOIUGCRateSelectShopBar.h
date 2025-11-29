@class UIView, DitoGeneralContainerPageContext, NSString, UIImageView, NSDictionary, AWEPOIUGCRateSelectivePOIBarParamsModel, UILabel, AWEPOIUGCRateSelectShopListView;
@protocol AWEPOIUGCRateSelectShopBarDelegate;

@interface AWEPOIUGCRateSelectShopBar : UIView

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *lovelyLine;
@property (retain, nonatomic) AWEPOIUGCRateSelectShopListView *listView;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSDictionary *selectivePoiBarParams;
@property (weak, nonatomic) DitoGeneralContainerPageContext *currentControllerCtx;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<AWEPOIUGCRateSelectShopBarDelegate> delegate;
@property (readonly, nonatomic) AWEPOIUGCRateSelectivePOIBarParamsModel *barParamsModel;

+ (double)height;

- (void)updateWithName:(id)a0;
- (void)didClickShop;
- (void)updateLovelyLineWithOffset:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
