@class UIImageView, UILabel, UIView, UIButton;

@interface IESLiveResolutionIntroduceHDRView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *hdrExampleImage;
@property (retain, nonatomic) UILabel *hdrLabel;
@property (retain, nonatomic) UILabel *hdrDescriptionLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL forLandscape;
@property (copy, nonatomic) id /* block */ closeButtonTappedBlock;

- (void)p_layoutSubView;
- (void)p_onCloseButtonTapped;
- (void).cxx_destruct;
- (id)initWithLandscape:(BOOL)a0;

@end
