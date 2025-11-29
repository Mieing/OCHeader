@class UIView, IESECButton, NSArray, IESECGoodsDetailTracker, NSObject, IESECGoodsDetailParameters, IESECGoodsGroupBuyingModel, UILabel;
@protocol OS_dispatch_source, IESECGoodsDetailInfoViewEventDelegate;

@interface IESECGoodsActivityGroupBuyMarqueeView : UIView

@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (retain, nonatomic) UILabel *groupbuyerInfoLabel;
@property (retain, nonatomic) UIView *marqueeContainerView;
@property (copy, nonatomic) NSArray *avatarImageViewArray;
@property (retain, nonatomic) IESECButton *ruleButton;
@property (retain, nonatomic) IESECButton *buyTimeLabel;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *animationTimer;
@property (weak, nonatomic) id<IESECGoodsDetailInfoViewEventDelegate> delegate;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsGroupBuyingModel *groupBuyInfo;
@property (retain, nonatomic) NSArray *buyerList;
@property (nonatomic) unsigned long long lastAvatarIndex;

- (id)generateAvatarImageViewArray;
- (void)setupOriginLayout;
- (id)generateBuyerInfoText;
- (void)movingAnimation;
- (void)fetchDynamicGroupBuyInfo;
- (id)generateBuyTimeText;
- (void)addNewImageView;
- (id)avatarView:(id)a0;
- (void)openRuleDescriptionPanel;
- (id)initWithParameters:(id)a0 tracker:(id)a1;
- (void)showAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)addingAnimation;
- (void)updateContent;
- (void)dealloc;
- (void)setupTimer;
- (void)setupUI;

@end
