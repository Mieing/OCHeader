@class UILabel, UIImageView, UIView;

@interface IESECShopShareBubbleView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *containerView;

- (void)hideBubble;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)setupViews;

@end
