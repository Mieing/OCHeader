@class UIView, BiaAppReaderMessagePlayButton, BizAppReaderMessageBigPicViewModel, UIImageView, MMHeadImageView, CAGradientLayer, RichTextView, UILabel;

@interface BizAppReaderMessageBigPicView : UIView

@property (retain, nonatomic) UIImageView *finderAuthorView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) BizAppReaderMessageBigPicViewModel *viewModel;
@property (retain, nonatomic) UILabel *videoDurationLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) BiaAppReaderMessagePlayButton *playButton;
@property (retain, nonatomic) UIView *coverImageView;
@property (retain, nonatomic) CAGradientLayer *coverGradientLayer;
@property (retain, nonatomic) RichTextView *titleLabel;
@property (retain, nonatomic) MMHeadImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *multiPicIconView;
@property (retain, nonatomic) UILabel *picCountLabel;
@property (nonatomic) BOOL SnsCardStyleOptimization;

+ (id)convertToDurationString:(unsigned long long)a0;

- (id)init;
- (void)setupUI;
- (void)setupCoverImageView;
- (void)setupCoverBottomViews;
- (void)setupTitleLabel;
- (void)setupAuthorViews;
- (void)prepareForReuse;
- (void)updateWithViewModel:(id)a0;
- (void)cancelUpdatingCoverImageView;
- (void)updateCoverImageView:(id)a0;
- (void)showFailedCoverImage;
- (void)cropLongPic:(id)a0;
- (void)updateLayoutWithBigPicSize:(struct CGSize { double x0; double x1; })a0 titleSize:(struct CGSize { double x0; double x1; })a1 viewStyle:(id)a2;
- (void)refreshBottomViewLayout:(id)a0;
- (void)updateUsername:(id)a0 nickname:(id)a1;
- (BOOL)isHiddenAvatarImageView;
- (BOOL)isHiddenNickNameLabel;
- (void).cxx_destruct;

@end
