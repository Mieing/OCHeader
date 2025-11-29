@class NSString, UIImageView, NSDictionary, UIView, IESECLigoContext, IESECLiveGoodsListLowPriceInfoModel;

@interface IESECLiveListCellPriceBannerView : UIView <IESECLiveConfigViewDelegate, IESECLigoComponentProtocol>

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UIView *backupView;
@property (retain, nonatomic) IESECLigoContext *ligoContext;
@property (retain, nonatomic) NSDictionary *basicTrackParams;
@property (retain, nonatomic) NSDictionary *targetParams;
@property (retain, nonatomic) IESECLiveGoodsListLowPriceInfoModel *bannerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bannerHeight;

- (id)p_textFont;
- (BOOL)enableReuseComponent;
- (id)initWithLigoContext:(id)a0;
- (void)p_clickMoreArea;
- (void)p_clickBanner:(id)a0;
- (id)p_curBtmModel;
- (void)trackWithEvent:(id)a0 additionParams:(id)a1 btmModel:(id)a2;
- (void)updateComponentWithModel:(id)a0 ligoContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateModel:(id)a0;

@end
