@class UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol AWEPlayDislikeTagViewDelegate;

@interface AWEPlayDislikeWithDrawTagView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEPlayDislikeTagViewDelegate> delegate;

- (void)didTapTagView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateUI;

@end
