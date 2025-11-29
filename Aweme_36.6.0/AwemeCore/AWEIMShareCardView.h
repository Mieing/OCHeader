@class UIView, AWEIMCardMessage, AWEIMMessageUIExtraInfo, UIImageView, UIButton, CAGradientLayer, MASConstraint, AWEIMRefreshImageView, UILabel, NSDictionary;
@protocol AWEIMShareCardViewDelegate;

@interface AWEIMShareCardView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UIButton *followBtn;
@property (nonatomic) BOOL isSendFromMe;
@property (retain, nonatomic) AWEIMMessageUIExtraInfo *messageUIExtraInfo;
@property (retain, nonatomic) UIView *bgViewWhenChatImgExits;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *mediaImageIcon;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UILabel *liveLabel;
@property (retain, nonatomic) CAGradientLayer *liveLabelLayer;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) MASConstraint *titleXConstraintToFollowBtn;
@property (retain, nonatomic) MASConstraint *titleXConstraintToSelf;
@property (retain, nonatomic) AWEIMRefreshImageView *firstPostImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *middlePostImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *lastPostImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *cardAvatarImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *postImageView;
@property (retain, nonatomic) AWEIMRefreshImageView *fullCoverImageView;
@property (weak, nonatomic) id<AWEIMShareCardViewDelegate> delegate;
@property (weak, nonatomic) AWEIMCardMessage *cardMessage;
@property (retain, nonatomic) UIView *separateView;
@property (copy, nonatomic) NSDictionary *uiH5CardExtraDict;
@property (retain, nonatomic) UIButton *shootSameBtn;

+ (double)ShareViewNoImageViewH;
+ (double)separateViewH;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getDrawFrameForImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (double)topOffset;
+ (double)leadingOffset;

- (void)p_chatBackgroundDidChangeNty:(id)a0;
- (void)p_setupNoImageUI;
- (id)initWithCardViewStyle:(unsigned long long)a0 cardType:(unsigned long long)a1 sendFromMe:(BOOL)a2;
- (void)configShareCardViewWithTitle:(id)a0 content:(id)a1 hint:(id)a2 cardAvatarURL:(id)a3 cardAvatarImage:(id)a4 cardAvatarDefaultImage:(id)a5 cardAvatarRadius:(double)a6;
- (void)p_updateColor;
- (void)p_setupOneImageUI;
- (void)p_setupThreeImagesUI;
- (void)p_insertBgViewIfNeeded;
- (void)p_configShareCardViewWithTitle:(id)a0 content:(id)a1 hint:(id)a2 cardAvatarURL:(id)a3 cardAvatarImage:(id)a4 cardAvatarDefaultImage:(id)a5 cardAvatarRadius:(double)a6;
- (void)p_addMainCoverImageWithUrlModel:(id)a0 isFixMode:(BOOL)a1;
- (void)updateNoImageShareCardCustomUI;
- (void)p_tryFixInvalidVideoCover;
- (void)shootSameBtnClicked:(id)a0;
- (void)setFollowButtonHiddenState:(BOOL)a0;
- (void)p_configShareCardViewWithImageURLModel:(id)a0 postDefaultImage:(id)a1 title:(id)a2 content:(id)a3 cardAvatarURLModel:(id)a4 cardAvatarImage:(id)a5 cardAvatarDefaultImage:(id)a6 cardAvatarRadius:(double)a7;
- (void)p_configShareCardViewWithTitle:(id)a0 content:(id)a1 hint:(id)a2 cardAvatarURLModel:(id)a3 cardAvatarImage:(id)a4 cardAvatarDefaultImage:(id)a5 cardAvatarRadius:(double)a6;
- (void)followBtnClicked:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
