@class UIStackView, UIImageView, UIVisualEffectView, UILabel, UIButton;

@interface AWEIMTopAvatarCardView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) long long signatureLines;
@property (retain, nonatomic) UILabel *recReasonLabel;
@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UIButton *profileButton;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (copy, nonatomic) id /* block */ jumpProfileBlock;

- (void)onClickProfileButton:(id)a0;
- (id)scaleToSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setButtonImageWithModel:(id)a0 button:(id)a1;
- (id)__defaultBtnImage;
- (void)refreshWithSignature:(id)a0 signatureLines:(long long)a1 recommendText:(id)a2 tagList:(id)a3 schoolName:(id)a4;
- (void)updateWithHasBgImg:(BOOL)a0;
- (id)p_getButtonAttributedString:(id)a0;
- (BOOL)p_createTipsLabelIfNeeded;
- (BOOL)p_createRecLabelIfNeeded;
- (BOOL)p_createTagStackViewIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)avatarTapped:(id)a0;

@end
