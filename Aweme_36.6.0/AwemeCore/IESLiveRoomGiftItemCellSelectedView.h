@class IESLiveGiftCellCustomizedIconScrollView, IESLiveRichTextLabel, UILabel, IESLiveGiftCellIconScrollView, RACDisposable, UIView, IESLiveAnimatedImageView, IESLiveGiftPriceLabelScrollView, IESLiveGiftPanelDataSharing, IESLiveGradientView, IESLiveRoomGiftItemCellContext, UIControl, IESLiveGiftItemSelectedScrollView, HTSLiveGiftItem, UIImageView;
@protocol IESLiveCustomConfig;

@interface IESLiveRoomGiftItemCellSelectedView : UIView

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) UIView *selectedContentView;
@property (retain, nonatomic) UIView *iconBackGroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *selectedEffectView;
@property (retain, nonatomic) IESLiveGiftCellCustomizedIconScrollView *giftAssemblyCustomizedCardScrollView;
@property (retain, nonatomic) IESLiveGiftCellIconScrollView *buffIconScrollView;
@property (retain, nonatomic) IESLiveGiftPriceLabelScrollView *giftPriceScrollView;
@property (retain, nonatomic) IESLiveGiftPriceLabelScrollView *groupPriceScrollView;
@property (retain, nonatomic) UIView *priceBackgroundView;
@property (retain, nonatomic) IESLiveGradientView *sendContentView;
@property (retain, nonatomic) IESLiveRichTextLabel *sendLabel;
@property (retain, nonatomic) UIControl *sendControl;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) RACDisposable *cellImageDisposable;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) UIImageView *rightTopIconView;
@property (retain, nonatomic) IESLiveRoomGiftItemCellContext *context;
@property (nonatomic) BOOL enableDiySendButtonText;
@property (retain, nonatomic) IESLiveGiftItemSelectedScrollView *giftItemSelectedScrollView;
@property (nonatomic) BOOL enableSelectedViewOpt;
@property (copy, nonatomic) id /* block */ onSend;
@property (retain, nonatomic) HTSLiveGiftItem *giftItem;

- (void)p_setupViews;
- (void)sendGift;
- (void)_sendGift;
- (void)setBuffCardToIndex:(long long)a0 withAnimated:(BOOL)a1;
- (void)setAssemblyGiftCustomizedCardToIndex:(long long)a0 withAnimation:(BOOL)a1;
- (void)setGroupCount:(long long)a0 withAnimated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 giftPanelDataSharing:(id)a1 context:(id)a2;
- (void)showPreselectAnimation;
- (void)inactivateWithSendLabel:(id)a0 useCustomColor:(BOOL)a1;
- (void)configSendGiftButtonGreyModeWithBuffGiftItem:(id)a0 cardIndex:(long long)a1;
- (void)configSendGiftButtonGreyModeWithAssemblyGiftItem:(id)a0 cardIndex:(long long)a1;
- (void)setupGiftAssemblyCustomizedCardScrollViewIfNeeded;
- (id)sendContentBackgroundColors;
- (BOOL)_parseSendLabelTextOnActivation;
- (id)sendTextColor;
- (void)activateWithSendLabel:(id)a0;
- (void)p_updateStaticGiftIcon;
- (void)updateRightTopView;
- (void)addSubViewsConstraints;
- (void)showIconAndPriceNormal;
- (void)showIconAndPriceScroll;
- (id)buildGiftPriceString:(id)a0 lockStatus:(BOOL)a1;
- (id)buildGiftPriceString:(id)a0;
- (void)updateSelectedIndex:(long long)a0 withAnimation:(BOOL)a1 style:(long long)a2;
- (void)showGiftAssemblyCustomizedCardScrollView:(BOOL)a0;
- (void)setupGiftPriceScrollViewIfNeeded;
- (void)showBuffCardScrollView:(BOOL)a0;
- (void)setupBuffIconScrollViewIfNeeded;
- (void)showGiftPriceScrollView:(BOOL)a0;
- (void)setupGroupPriceScrollViewIfNeeded;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)activate;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (double)imageWidth;
- (double)imageHeight;

@end
