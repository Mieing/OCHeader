@class UILabel, UIButton, UITapGestureRecognizer;

@interface AWEDislikeButtonView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *tailImageView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ dislikeActionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)updateWithTitle:(id)a0 dislike:(id)a1 cancel:(id)a2;
- (id)initWithDislike:(id /* block */)a0 cancel:(id /* block */)a1 close:(id /* block */)a2;
- (void)addInsetWithSpace:(double)a0 button:(id)a1;
- (void)onDislikeClicked:(id)a0;
- (void)onCancelClicked:(id)a0;
- (void)onCloseClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;

@end
