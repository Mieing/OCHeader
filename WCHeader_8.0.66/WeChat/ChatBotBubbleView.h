@class NSString, UIImageView, UILabel, UIView;

@interface ChatBotBubbleView : UIView

@property (nonatomic) double cornerRadius;
@property (nonatomic) double popDistance;
@property (nonatomic) double maxContentWidth;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *textContent;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) UIView *contentView;

- (void)showOnView:(id)a0 superview:(id)a1;
- (void)showOnView:(id)a0;
- (id)initWithTextContent:(id)a0 type:(long long)a1;
- (void)setCornerRadius:(double)a0;
- (void)setPopDistance:(double)a0;
- (void)setMaxContentWidth:(double)a0;
- (void)setType:(long long)a0;
- (double)cornerRadius;
- (double)popDistance;
- (double)maxContentWidth;
- (long long)type;
- (id)initWithTextContent:(id)a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutContentView;
- (void)layoutArrowImageView;
- (void)layoutTextContent;
- (void)updateContent:(id)a0;
- (void)showInView:(id)a0;
- (void).cxx_destruct;

@end
