@class UITapGestureRecognizer, UIImageView, UILabel, UIView, UIButton;
@protocol AWEFeedSearchAIGCInputViewDelegate;

@interface AWEFeedSearchAIGCInputView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *fakeSendButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEFeedSearchAIGCInputViewDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (void)updateWithModel:(id)a0;

@end
