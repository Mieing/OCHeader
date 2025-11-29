@class UIView, NSArray, UIImageView, UIVisualEffectView, IESEffectModel, UILabel, YYLabel;

@interface ACCAIGCTemplateCollectionViewNewCell : UICollectionViewCell

@property (retain, nonatomic) IESEffectModel *AIGCModel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIImageView *userIconImageView;
@property (retain, nonatomic) UIImageView *cameraImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (nonatomic) double imageViewHeight;
@property (retain, nonatomic) UIView *accessibilityBgView;
@property (retain, nonatomic) NSArray *coverDownloadURLs;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (nonatomic) unsigned long long cellType;
@property (copy, nonatomic) id /* block */ trackSelectCutSameButtonBlock;

+ (double)heightForAIGCcutSameButton;
+ (id)cellIdentifier;

- (id)p_accessibilityLabel;
- (void)updateUIAdView;
- (void)updateWithIESEffectModel:(id)a0 withCellType:(unsigned long long)a1;
- (void)toCutSameFlowFromCoverView;
- (void)toCutSameFlowFromButton;
- (void)updateIconImageView;
- (void)updateNewHotView;
- (void)updateUINewMyView;
- (void)hideOrShowNewCurrentViewItems:(BOOL)a0;
- (void)updateHotContent;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)titleHeight;

@end
