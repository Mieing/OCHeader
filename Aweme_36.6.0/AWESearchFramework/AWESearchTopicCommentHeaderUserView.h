@class UIImageView, UILabel, CAShapeLayer;

@interface AWESearchTopicCommentHeaderUserView : UIView

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *isMeLabelIcon;
@property (retain, nonatomic) UIImageView *avatarTagView;
@property (copy, nonatomic) id /* block */ authorNameTappedBlock;
@property (copy, nonatomic) id /* block */ relationTagTappedBlock;

- (void)configWithUser:(id)a0 commentTime:(double)a1 commentIpString:(id)a2;
- (void)updateLayoutWithUser:(id)a0 containerWidth:(long long)a1 containerHeight:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
