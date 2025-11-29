@class AWEIMConStrangerUnfoldBannerConfig, UILabel, UIView, UIButton;
@protocol IESIMRichButtonProtocol;

@interface AWEIMConStrangerUnfoldBannerView : UIView

@property (retain, nonatomic) AWEIMConStrangerUnfoldBannerConfig *config;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton<IESIMRichButtonProtocol> *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *bottomLine;

- (void)updateWithChatHasBackground:(BOOL)a0;
- (void)__didTapConfirmButton:(id)a0;
- (void)__didTapCloseButton:(id)a0;
- (void)__createViews;
- (void)__layoutViews;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
