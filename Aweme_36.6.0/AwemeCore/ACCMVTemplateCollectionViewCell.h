@class CAGradientLayer, UIView, UIImageView, NSString, UILabel, ACCMvAmountView, UIButton;
@protocol ACCMVTemplateModelProtocol;

@interface ACCMVTemplateCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (retain, nonatomic) ACCMvAmountView *amountView;
@property (retain, nonatomic) ACCMvAmountView *descView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *cutsameButton;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double imageViewHeight;
@property (retain, nonatomic) UIView *accessibilityBgView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (copy, nonatomic) id /* block */ trackSelectMV;
@property (copy, nonatomic) id /* block */ trackSelectCutsameButton;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;
+ (double)extraHeight;
+ (double)p_coverImageRatioWithTemplateModel:(id)a0;
+ (double)heightForMVCutsameButton;
+ (double)widthForMVCutsameButton;
+ (id)cellIdentifier;

- (id)p_accessibilityLabel;
- (void)setGradientLayerToCoverImage;
- (void)updateWithTemplateModel:(id)a0;
- (void)p_setupUI_A;
- (void)updateLabelStyleIfNeed;
- (void)onCutsameButtonClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
