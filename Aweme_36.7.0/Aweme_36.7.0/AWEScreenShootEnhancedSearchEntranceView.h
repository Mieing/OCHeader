@class LOTAnimationView, UIImageView, UILabel, UIImage, AWESearchStickerModel;

@interface AWEScreenShootEnhancedSearchEntranceView : UIView

@property (retain, nonatomic) LOTAnimationView *searchIconView;
@property (retain, nonatomic) UIImageView *snapshotView;
@property (retain, nonatomic) UILabel *defaultTitleLabel;
@property (retain, nonatomic) UILabel *dynamicTitleLabel;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) AWESearchStickerModel *stickerModel;
@property (nonatomic) double transitionTime;
@property (nonatomic) unsigned long long playerStatus;
@property (nonatomic) long long animationStage;
@property (nonatomic) long long dataStatus;
@property (copy, nonatomic) id /* block */ animationStageChanged;

- (id)wordContent;
- (void)showTransitionAnimationIfNeeded;
- (void)animationStyle1;
- (id)fetchRectImageWithModel:(id)a0 snapshot:(id)a1;
- (void)animationStyle2;
- (struct CGSize { double x0; double x1; })labelSizeWithText:(id)a0 fontSize:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertStickerModelToRect:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
