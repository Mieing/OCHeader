@class NSString, UIImageView, IESECGradientView, UILabel, UIView, UIImage;

@interface IESECMallInnerFeedTitleView : UIView

@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UIImageView *descIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESECGradientView *gradientView;
@property (retain, nonatomic) UIImage *descIconRedArrow;
@property (retain, nonatomic) UIImage *descIconBlackArrow;
@property (copy, nonatomic) NSString *reportProductMindTagTrack;

- (void)updateWithNewModel:(id)a0 iconURLModelArray:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
