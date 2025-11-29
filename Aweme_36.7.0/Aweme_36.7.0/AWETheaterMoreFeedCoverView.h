@class AWEGradientView, UIView, UILabel, BDImageView;

@interface AWETheaterMoreFeedCoverView : UIView

@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *updateInfoLabel;
@property (copy, nonatomic) id /* block */ finishImageRequestBlock;

- (void)updateCoverImage:(id)a0;
- (void)updateCoverTag:(id)a0;
- (void)updateCoverInfoView:(id)a0;
- (void)configWithSectionItem:(id)a0 themeStyle:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;

@end
