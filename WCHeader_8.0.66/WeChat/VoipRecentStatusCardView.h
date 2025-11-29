@class UIImageView, UIView;

@interface VoipRecentStatusCardView : UIView

@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIImageView *closeLogoImageView;
@property (retain, nonatomic) UIView *closeHotView;
@property (retain, nonatomic) UIView *contentsView;
@property (nonatomic) BOOL isCloseBtnHidden;
@property (copy, nonatomic) id /* block */ didClickCloseButtonCallback;

- (id)init;
- (void)layoutSubviews;
- (void)onClickCloseViewWithSender:(id)a0;
- (double)preferredHeight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onCardShow;
- (void)onTerminate;
- (void).cxx_destruct;

@end
