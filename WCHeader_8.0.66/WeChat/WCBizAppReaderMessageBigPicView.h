@class CAGradientLayer;

@interface WCBizAppReaderMessageBigPicView : BizAppReaderMessageBigPicView

@property (retain, nonatomic) CAGradientLayer *bgGradiantLayer;

- (void)setupCoverImageView;
- (void)setupCoverBottomViews;
- (void)updateWithViewModel:(id)a0;
- (void)cancelUpdatingCoverImageView;
- (void)updateCoverImageView:(id)a0;
- (void)updateLayoutWithBigPicSize:(struct CGSize { double x0; double x1; })a0 titleSize:(struct CGSize { double x0; double x1; })a1 viewStyle:(id)a2;
- (void)refreshBottomViewLayout:(id)a0;
- (BOOL)isHiddenAvatarImageView;
- (BOOL)isHiddenNickNameLabel;
- (void).cxx_destruct;

@end
