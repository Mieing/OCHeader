@class DUXButton, NSString, UIImage, NSURL, UILabel, BDImageView;

@interface DUXVacantView : UIView <IESIMVacantViewProtocol>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) BDImageView *imageView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) DUXButton *button;
@property (retain, nonatomic) DUXButton *linkButton;
@property (nonatomic) double maxScale;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ didClickButton;
@property (copy, nonatomic) id /* block */ didClickLinkAction;
@property (nonatomic) long long numberOfLinesForDetail;

+ (long long)duxVacantViewTypeWithIESIMType:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithType:(long long)a0 withImage:(id)a1 withTitle:(id)a2 withDetail:(id)a3;
- (void)setButtonText:(id)a0 clickAction:(id /* block */)a1;
- (void)didClickButtonAction;
- (void)didClickLinkButtonAction;
- (void)setLinkText:(id)a0 clickAction:(id /* block */)a1;
- (id)initWithType:(long long)a0 withImage:(id)a1 withTitle:(id)a2 withDetail:(id)a3 enlargeType:(unsigned long long)a4;
- (void)iesim_setType:(long long)a0;
- (void)setupIconView;
- (void)setupFrame;
- (void)setupEmotionalView;
- (double)calculateIconViewHeight;
- (double)calculateEmotionalHeight;
- (double)calculateHeight:(BOOL)a0;
- (void)p_resetFont;
- (void).cxx_destruct;
- (double)buttonHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)maxWidth;
- (void)layoutSubviews;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })imageViewSize;

@end
