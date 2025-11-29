@class UIStackView, NSString, IESECLLDCLynxManager, NSDictionary, IESECLongContentLabelElement, UIView, IESECGoodsDetailServiceTagsContainerStackView;

@interface IESECGoodsDetailLongTitleTagInfoView : UIView <IESECGoodsDetailViewUpdateMessage>

@property (retain, nonatomic) IESECLongContentLabelElement *contentLabelElement;
@property (retain, nonatomic) IESECGoodsDetailServiceTagsContainerStackView *headButtonsStackView;
@property (retain, nonatomic) UIStackView *headLabelsStackView;
@property (retain, nonatomic) IESECGoodsDetailServiceTagsContainerStackView *headCouponsStackView;
@property (retain, nonatomic) UIStackView *tailIconLabelsStackView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (retain, nonatomic) UIView *lynxView;
@property (copy, nonatomic) NSDictionary *clickActionMeta;
@property (nonatomic) BOOL tailButtonAlignToRight;
@property (nonatomic) BOOL shouldHideOutBoundsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForContentLabelElem:(id)a0 Width:(double)a1;
+ (double)heightForContentLabelElem:(id)a0;
+ (double)calculateTitleHeight:(id)a0 titleWidth:(double)a1 font:(id)a2 tagIconURLModelArray:(id)a3;
+ (double)widthForIconTagArray:(id)a0;

- (void)goodsDetailActivityDidUpdateCountdown:(id)a0 goodsDetailUID:(id)a1;
- (void)configureTagInfoWithContent:(id)a0;
- (void)clearConfigureDataModel;
- (id)createHeadButtonWithElement:(id)a0;
- (void)configureTagInfoWithContent:(id)a0 lynxManger:(id)a1 width:(double)a2;
- (id)createGradientHeadLongTitleWithElement:(id)a0 Width:(double)a1;
- (id)createCouponButtonWithElement:(id)a0;
- (void)configureTagInfoWithContent:(id)a0 pageIdentifier:(id)a1 lynxManger:(id)a2 width:(double)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
