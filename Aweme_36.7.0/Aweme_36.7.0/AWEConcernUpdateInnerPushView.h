@class UIImageView, UILabel, UIButton;
@protocol AWEConcernUpdateInnerPushViewDelegate;

@interface AWEConcernUpdateInnerPushView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *extTagLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) id<AWEConcernUpdateInnerPushViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)updateView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
