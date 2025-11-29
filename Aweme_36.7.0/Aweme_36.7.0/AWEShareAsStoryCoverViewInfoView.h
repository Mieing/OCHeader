@class AWEGradientView, UIImageView, UIView, UILabel, YYLabel;

@interface AWEShareAsStoryCoverViewInfoView : UIView

@property (retain, nonatomic) YYLabel *titleLab;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UIImageView *playerView;
@property (retain, nonatomic) UIImageView *shareIconView;
@property (retain, nonatomic) UIImageView *userIconView;
@property (retain, nonatomic) UILabel *userNameLab;
@property (retain, nonatomic) AWEGradientView *gradientView;

- (void)updateWithCover:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
