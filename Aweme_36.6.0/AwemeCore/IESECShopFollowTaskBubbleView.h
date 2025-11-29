@class UIImageView, UILabel, UIView;

@interface IESECShopFollowTaskBubbleView : IESECShopMonitorActionView

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *textView;

- (void).cxx_destruct;
- (id)init;
- (void)setupViews;
- (void)updateWithText:(id)a0;

@end
