@class CAGradientLayer, UIStackView, UIImageView, UILabel;
@protocol AFDFriendsTabTemplateDetailContentContainerViewDelegate;

@interface AFDFriendsTabTemplateDetailContentContainerView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) UILabel *authorTextLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *additionalInfoLabel;
@property (retain, nonatomic) UIImageView *authorImgView;
@property (weak, nonatomic) id<AFDFriendsTabTemplateDetailContentContainerViewDelegate> delegate;
@property (nonatomic) BOOL isFromMusicDetail;

- (void)setupNewStyleViews;
- (void)p_enterAuthorProfile:(id)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
