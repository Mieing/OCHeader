@class AWEDetailCellTagLabel, UIImageView, AWEAwemeModel, UILabel, AWEGradientView, NSString;

@interface AWEShopSeekCollectionViewCell : UICollectionViewCell <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *avatarLabel;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL usingDynamicCover;
@property (nonatomic) double imageRequestSentinel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEGradientView *maskLayer;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)updateCoverWithCompletion:(id /* block */)a0;
- (BOOL)shouldUseDynamicCover:(id)a0;
- (id)__accessibilityLabelwithTitle:(id)a0 isMine:(BOOL)a1 count:(BOOL)a2;
- (void)clearAnimatedImageBuffer;
- (void)configWithModel:(id)a0 isMine:(BOOL)a1;
- (void)processSRImage:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateUI;
- (void)_setupUI;

@end
