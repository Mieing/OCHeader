@class IESECGoodsFeedContext, NSString, UIImageView, IESECGoodsFeedTitleView, IESECFeedInnerFlowBuyView, IESECFeedInnerFlowPriceView, UITapGestureRecognizer;
@protocol IESECVideoInnerFlowListActionDelegate;

@interface IESECFeedInnerFlowBottomView : UIView <IESECContentListLifeCycleProtocol>

@property (retain, nonatomic) IESECGoodsFeedTitleView *goodsTitleLabel;
@property (retain, nonatomic) IESECFeedInnerFlowPriceView *priceView;
@property (retain, nonatomic) IESECFeedInnerFlowBuyView *buyView;
@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, nonatomic) IESECGoodsFeedContext *context;
@property (nonatomic) BOOL containerAppearStat;
@property (weak, nonatomic) id<IESECVideoInnerFlowListActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight;

- (void)addGesture;
- (id)titleConfig;
- (void)tapGestureRecognizerHandler:(id)a0;
- (void)listHeaderAppearStateChange:(BOOL)a0;
- (id)priceViewConfig;
- (id)buyViewConfig;
- (id)initWithGoodsFeedContext:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;
- (void)updateUI;

@end
