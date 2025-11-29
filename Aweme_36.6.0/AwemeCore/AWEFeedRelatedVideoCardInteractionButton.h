@class UIImageView, UILabel;

@interface AWEFeedRelatedVideoCardInteractionButton : UIView

@property (retain, nonatomic) UIImageView *imageIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL needAnimation;
@property (copy, nonatomic) id /* block */ touchUpInsideBlock;

- (void).cxx_destruct;
- (void)setUpView;

@end
