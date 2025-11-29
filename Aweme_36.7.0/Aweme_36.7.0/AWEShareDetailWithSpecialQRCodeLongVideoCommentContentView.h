@class UIImageView, NSString, CAShapeLayer, AWEPOIDetailRatingContainerView, AWEGradientView, UIView, UILabel;

@interface AWEShareDetailWithSpecialQRCodeLongVideoCommentContentView : AWEShareDetailWithQRCodeBaseContentView

@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *commentContainerView;
@property (retain, nonatomic) UIView *tipContainerView;
@property (retain, nonatomic) UIView *dashLineView;
@property (retain, nonatomic) CAShapeLayer *dashLine;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEPOIDetailRatingContainerView *rateStarView;
@property (retain, nonatomic) UILabel *gradeLabel;
@property (retain, nonatomic) UILabel *commentContentLabel;
@property (retain, nonatomic) UIImageView *savePhotoIcon;
@property (retain, nonatomic) UIImageView *scanIcon;
@property (retain, nonatomic) UILabel *savePhotoLabel;
@property (retain, nonatomic) UILabel *scanLabel;
@property (copy, nonatomic) NSString *commentString;
@property (nonatomic) double score;

- (id)imageToSaveToAlbum;
- (struct CGSize { double x0; double x1; })saveImageSize;
- (void)syncContentFrom:(id)a0;
- (id)cropFitImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setContext:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setUpSubviews;
- (struct CGSize { double x0; double x1; })contentViewSize;

@end
