@class UITapGestureRecognizer, UIView, AWEIMShareFeedCardView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMFeedContentView : UIView

@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) AWEIMShareFeedCardView *cardView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL enableAvatarClickAction;

- (void)showLoading:(BOOL)a0;
- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
