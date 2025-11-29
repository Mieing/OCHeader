@class AWEIMGeneralDisableCardView, AWEIMGeneralCardView, UITapGestureRecognizer;

@interface AWEIMShareH5GoodsMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMGeneralCardView *cardView;
@property (retain, nonatomic) AWEIMGeneralDisableCardView *disableCardView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)p_getSubtitleWithMessage:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_initSubviews;
- (BOOL)isOpenedTimor;
- (BOOL)unSupportMessageForDLite:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)p_trackH5ShareFromFeedAnchorIfNeeded:(id)a0;
- (void)trackH5ShareEventForName:(id)a0;
- (void)trackEcomH5MsgClick;
- (void)p_trackH5ShareEventForName:(id)a0;
- (void)trackH5ShareFromFeedAnchorShowIfNeeded;
- (void)coverTapped:(id)a0;
- (void)p_changeCardStyleWithIsDisable:(BOOL)a0;
- (void)trackShareGoodsClick;
- (BOOL)isOpenedActiveRouterOrSafeWebLink;
- (id)p_getTargetView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)willDisplayCell;

@end
