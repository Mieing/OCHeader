@class IESECGoodFeedSellingPointsComponentView, UIView, IESECGoodsFeedTitleView, UITapGestureRecognizer, NSString, UIImageView, IESECGoodsMessageDisplayViewController, IESECFeedInnerFlowPriceView, IESECFeedInnerFlowBuyView, IESECGoodsFeedContext;
@protocol IESECVideoInnerFlowListActionDelegate;

@interface IESECFeedInnerFlowTopGoodView : UIView <IESECGoodsMessageDisplayViewControllerDelegate>

@property (nonatomic) BOOL viewSetupState;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) IESECGoodsFeedTitleView *goodsTitleLabel;
@property (retain, nonatomic) IESECGoodFeedSellingPointsComponentView *sellingPointsView;
@property (retain, nonatomic) IESECFeedInnerFlowPriceView *priceView;
@property (retain, nonatomic) IESECFeedInnerFlowBuyView *buyView;
@property (retain, nonatomic) UIView *containerBgView;
@property (retain, nonatomic) UIView *commentTipsView;
@property (retain, nonatomic) IESECGoodsMessageDisplayViewController *messageDisplayViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *buyTapGesture;
@property (readonly, nonatomic) IESECGoodsFeedContext *context;
@property (weak, nonatomic) id<IESECVideoInnerFlowListActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })goodsImageRect;

- (void)addGesture;
- (void)setupViewConstraints;
- (id)titleConfig;
- (void)tapGestureRecognizerHandler:(id)a0;
- (id)priceViewConfig;
- (id)buyViewConfig;
- (id)initWithGoodsFeedContext:(id)a0;
- (id)sellingPointConfig;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topViewImageFrame;
- (void)setupWithGoodsFeedContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSmallScreen;
- (void)setupUI;
- (void)updateUI;

@end
