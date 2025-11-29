@class UIImageView, AWEPublishNewSlidesPreviewBackDropView, UIView, UILabel, UIButton;

@interface AWEPublishNewSlidesPreviewMaskView : UIView

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPublishNewSlidesPreviewBackDropView *backgroundBlurView;
@property (retain, nonatomic) UIView *darkMaskView;
@property (retain, nonatomic) UIButton *addCoverView;
@property (retain, nonatomic) UIImageView *addCoverImage;
@property (retain, nonatomic) UILabel *addCoverLabel;
@property (retain, nonatomic) UIImageView *addCoverIcon;
@property (copy, nonatomic) id /* block */ clickAction;

+ (id)maskViewForImageView:(id)a0;

- (void)removeMaskView;
- (void)updateImageView:(id)a0;
- (void)didClickEditButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
