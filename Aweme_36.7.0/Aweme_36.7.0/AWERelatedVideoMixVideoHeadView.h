@class UIImageView, AWEMixVideoModel, UILabel, UIButton;

@interface AWERelatedVideoMixVideoHeadView : UIView

@property (retain, nonatomic) UIImageView *mixImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *hintIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) id /* block */ closeButtonClick;

- (void)updateMixInfo:(id)a0;
- (id)attributedStringWithTitleLabel:(id)a0;
- (void)hintIconTapped:(id)a0;
- (double)getMixVideoHeadViewHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)closeButtonTapped;

@end
