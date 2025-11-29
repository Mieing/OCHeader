@class IESLiveButton, IESLivePKPanelNoticeViewConfig, HTSLiveScorllView, IESLiveImageView, UITapGestureRecognizer;

@interface IESLivePKPanelNoticeView : UIView

@property (retain, nonatomic) IESLivePKPanelNoticeViewConfig *config;
@property (retain, nonatomic) IESLiveImageView *tipsImageView;
@property (retain, nonatomic) IESLiveImageView *transferImageView;
@property (retain, nonatomic) HTSLiveScorllView *scrollTextLabel;
@property (retain, nonatomic) IESLiveButton *transferButton;
@property (retain, nonatomic) IESLiveButton *closeButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

- (void)updateUIWithConfig:(id)a0;
- (void)updateUIWithRivalsResponseTipInfo:(id)a0;
- (void)updateUIWithTopTipInfo:(id)a0;
- (void)setupScrollTextViewConstraints;
- (void)startScrollAnimation;
- (void)didTapTransferButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapCloseButton;
- (void)layoutUI;

@end
