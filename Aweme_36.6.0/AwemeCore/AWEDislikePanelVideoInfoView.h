@class UIImageView, UILabel, DUXButton;

@interface AWEDislikePanelVideoInfoView : UIView

@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) UIImageView *videoThumb;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) DUXButton *closeButton;

- (void)didClickedClose;
- (id)initWithClose:(id /* block */)a0;
- (void)setVideoThumbImage:(id)a0;
- (void)setVideoThumbImageWithArray:(id)a0;
- (void)setThumbImageSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setTip:(id)a0;
- (void)setupUI;

@end
