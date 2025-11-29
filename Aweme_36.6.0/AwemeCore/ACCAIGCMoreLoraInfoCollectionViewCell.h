@class UILabel, ACCAIGCLoraPersonInfo, UIImageView, ACCAIGCMultiImageView, UIView, ACCAnimatedButton;
@protocol ACCAIGCMoreLoraInfoCollectionViewCellDelegate;

@interface ACCAIGCMoreLoraInfoCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) ACCAIGCMultiImageView *coverImageView;
@property (retain, nonatomic) UIImageView *avatarStarView;
@property (retain, nonatomic) UIImageView *avatarRetryView;
@property (retain, nonatomic) UIView *overlay;
@property (retain, nonatomic) ACCAnimatedButton *coverButton;
@property (retain, nonatomic) UILabel *createLabel;
@property (retain, nonatomic) UIImageView *deletedImageView;
@property (retain, nonatomic) UIImageView *blurImageView;
@property (retain, nonatomic) UIView *contentLoraView;
@property (retain, nonatomic) UILabel *addTipLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) ACCAnimatedButton *addTipButton;
@property (nonatomic) unsigned long long loraCellType;
@property (nonatomic) long long darkMode;
@property (nonatomic) BOOL isFromInspiration;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *loraInfo;
@property (weak, nonatomic) id<ACCAIGCMoreLoraInfoCollectionViewCellDelegate> delegate;

- (void)onThemeChanged;
- (void)updateSelectStatus:(BOOL)a0;
- (BOOL)shouldUseAICreationUIStyle;
- (void)onClickDeletedAction;
- (void)clickSetLoraInfo;
- (void)updateRecordSelectStatus:(BOOL)a0;
- (struct CGSize { double x0; double x1; })calculateCustomLabelHeightWithLabel:(id)a0 font:(id)a1;
- (void)updateAddTipButtonFrame;
- (void)updateManagerLoraInfo:(id)a0;
- (void)updateSelectLoraInfo:(id)a0;
- (void)updateUGCFusionLoraInfo:(id)a0;
- (void)onClickFullPreviewAction;
- (void)onClickAddAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
