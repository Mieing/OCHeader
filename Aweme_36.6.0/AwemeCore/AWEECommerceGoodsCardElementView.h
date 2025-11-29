@class IESECGoodsDetailParameters, UILabel, NSDictionary, NSObject, IESECGoodsBottomActionHelper, UIViewController, CAGradientLayer, UIColor, IESECGoodsFeedActionButton, NSString, UIStackView, AWEAwemeModel, IESECGoodsDetailModel, UIImageView;
@protocol AWEECGoodsCardDataControllerProtocol, AWEECShoppingGoodsCardElementViewDelegate;

@interface AWEECommerceGoodsCardElementView : UIView <AWEFeedGoodsElementProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *eventTagContainer;
@property (retain, nonatomic) UIStackView *priceLabelContainer;
@property (retain, nonatomic) IESECGoodsFeedActionButton *actionButton;
@property (retain, nonatomic) UIImageView *breakLine;
@property (retain, nonatomic) UIColor *breakLineColor;
@property (retain, nonatomic) UIImageView *checkSignView;
@property (retain, nonatomic) UIStackView *serviceTagContainer;
@property (retain, nonatomic) NSObject<AWEECGoodsCardDataControllerProtocol> *goodsCardDataController;
@property (retain, nonatomic) IESECGoodsDetailModel *goodsDetail;
@property (retain, nonatomic) CAGradientLayer *backGroundGradientLayer;
@property (retain, nonatomic) IESECGoodsBottomActionHelper *actionHelper;
@property (retain, nonatomic) IESECGoodsDetailParameters *goodsParameters;
@property (retain, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) id<AWEECShoppingGoodsCardElementViewDelegate> delegate;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackProductEntranceClick;
- (id)drawLineOfDashByImageView:(id)a0;
- (void)updateViewWithGoodsCardDataModel:(id)a0;
- (id)getGoodsDetailModelFromDictionary:(id)a0;
- (void)updateTitleLabelAndEventTags;
- (void)updatePriceLabelAndSalesLabel;
- (void)updateServiceTagsWithServiceModelList:(id)a0;
- (void)actionButtonAction;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateActionButton;

@end
