@class UIView, UILabel, AWEEditStickerBubbleItem;

@interface AWEEditStickerBubbleViewCell : UITableViewCell

@property (retain, nonatomic) AWEEditStickerBubbleItem *bubbleItem;
@property (retain, nonatomic) UIView *sepLine;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)awe_identifier;

- (void)showBubbleShakeAnimation;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;

@end
