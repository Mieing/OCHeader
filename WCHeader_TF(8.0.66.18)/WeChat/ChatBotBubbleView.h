@class NSString, UIImageView, UILabel, UIView;

@interface ChatBotBubbleView : UIView

@property (retain, nonatomic) NSString *textContent;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *textContentView;
@property (retain, nonatomic) UIView *contentView;

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
