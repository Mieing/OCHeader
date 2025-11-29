@class UILabel, AWEIMMessage, UIImageView, UIView, AWEIMRefreshImageView, UIButton;
@protocol IESIMGradientViewProtocol;

@interface AWEIMShareFeedCardView : UIView

@property (nonatomic) BOOL isRefactorCell;
@property (retain, nonatomic) UIButton *digCountDescButton;
@property (retain, nonatomic) UIImageView *imageAlbumIconImageView;
@property (retain, nonatomic) UIImageView *longArticleIconView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIImageView *livePhototIconImageView;
@property (retain, nonatomic) UIImageView *textIconImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *coverImageView;
@property (retain, nonatomic) UIView<IESIMGradientViewProtocol> *bottomMaskView;
@property (retain, nonatomic) AWEIMRefreshImageView *cardAvatarImageView;
@property (retain, nonatomic) UILabel *nickLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *hotSpotTagView;
@property (weak, nonatomic) AWEIMMessage *message;

- (id)hintLabelStringWithTime:(double)a0;
- (void)updateDigCountDesc:(id)a0;
- (void)p_tryFixInvalidVideoCover;
- (void)configCardStyle;
- (void)__configSimplifyIfNeedWithMessage:(id)a0;
- (void)p_updateMessageCard;
- (void)p_setupBottomAvatarUI;
- (void)p_createImageAlbumIconImageViewIfNeeded;
- (void)p_createLongArticleIconViewIfNeeded;
- (void)p_createLivePhototIconImageViewIfNeeded;
- (void)p_createTextIconImageViewIfNeeded;
- (void)p_createPlayIconImageViewIfNeeded;
- (void)p_createDigCountDescButtonIfNeeded;
- (BOOL)p_needShowBottomAvatar;
- (void)p_updateNickNameAndAvatar;
- (void)p_requestUserWithProfileUid:(id)a0 currentMessage:(id)a1;
- (void)p_requestUserModelWithUid:(id)a0 currentMessage:(id)a1;
- (void)p_updateNickName:(id)a0 avatarURL:(id)a1;
- (void)showHotSpotTagIfNeed;
- (void)p_addCoverImageWithIsFixMode:(BOOL)a0;
- (id)titleWithMsg:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cardAvatarImageViewFrame;
- (void)configTitleLabel:(id)a0;
- (struct CGSize { double x0; double x1; })getTitleLabelSize:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
