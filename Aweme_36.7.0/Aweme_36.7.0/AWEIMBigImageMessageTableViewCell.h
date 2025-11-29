@class UIImageView, UILabel, UIView, NSDate;

@interface AWEIMBigImageMessageTableViewCell : AWEIMUserMessageTableViewCell

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIImageView *displayImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSDate *startLoadTimeDate;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;
+ (id)identifier;

- (void)chatBackgroundDidChangeNty:(id)a0;
- (void)bubbleViewTapped:(id)a0;
- (void)configWithMessage:(id)a0;
- (double)verticalOffsetWithMesasge:(id)a0;
- (void)p_initSubviews;
- (void)p_constraintBubbleSubviews;
- (void)p_constraintBubbleView;
- (BOOL)isOpenedTimor;
- (void)openActiveRouterOrSafeWebLink;
- (BOOL)unSupportMessageForDLite:(id)a0;
- (BOOL)p_isLegalActiveUrl:(id)a0;
- (id)menuTargetView;
- (id)gestureResponseViews;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (id)menuItems;
- (void)layoutSubviews;

@end
