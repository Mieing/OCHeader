@class AWEIMGeneralCardView, AWEIMGeneralDisableCardView, AWEGradientView, UITapGestureRecognizer;

@interface AWEIMSharePoiMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) AWEIMGeneralDisableCardView *disableCardView;
@property (retain, nonatomic) AWEIMGeneralCardView *cardViewView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)p_getSubtitleWithMessage:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)p_initSubviews;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void)coverTapped:(id)a0;
- (void)p_changeCardStyleWithIsDisable:(BOOL)a0;
- (id)p_getTargetView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (void)willDisplayCell;

@end
