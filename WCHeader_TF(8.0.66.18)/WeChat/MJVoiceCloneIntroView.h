@class MMUIImageView, MMUILabel, MMUIButton, WCAgreementCheckBox;
@protocol MJVoiceCloneIntroViewDelegate;

@interface MJVoiceCloneIntroView : UIView

@property (retain, nonatomic) MMUIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) WCAgreementCheckBox *agreementCheckBox;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *goRecordingButton;
@property (weak, nonatomic) id<MJVoiceCloneIntroViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (void)closeButtonDidTouchUpInside:(id)a0;
- (void)goRecordingButtonDidTouchUpInside:(id)a0;
- (void)updateGoRecordingButtonStyleWithAgreementSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
