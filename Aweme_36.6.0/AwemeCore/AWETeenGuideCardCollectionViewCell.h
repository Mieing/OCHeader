@class AWETeenGeneralResourceGroupModel, UIControl, UIImageView, AWETeenGuideCardLabel, UIView, UILabel, BDImageView;

@interface AWETeenGuideCardCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWETeenGeneralResourceGroupModel *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) BDImageView *coverView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIControl *skipControl;
@property (retain, nonatomic) UILabel *skipTitleLabel;
@property (retain, nonatomic) UIImageView *skipIconImageView;
@property (retain, nonatomic) AWETeenGuideCardLabel *guideCardLabel;
@property (nonatomic) long long maximumLines;
@property (nonatomic) long long hasShowRedBorderTime;
@property (nonatomic) BOOL hasFinishedShowRedBorder;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0 constraintWidth:(double)a1 isFixedRatio:(BOOL)a2;

- (void)configCellWithModel:(id)a0;
- (void)p_setupView;
- (void)p_updateDescription;
- (void)p_updateCover;
- (void)shouldHighlightCoverViewBorder:(BOOL)a0;
- (void)configCellWithModel:(id)a0 shouldShowGuideCardLabel:(BOOL)a1;
- (void)p_addGuideCardLabelIfNeeded;
- (id)p_buildTitle:(id)a0 maxlength:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
