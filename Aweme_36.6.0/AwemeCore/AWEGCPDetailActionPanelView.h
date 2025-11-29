@class UIStackView, IESGCPImageButton, AWEGCPDetailActionPanelViewStyleConfig;

@interface AWEGCPDetailActionPanelView : UIView

@property (retain, nonatomic) AWEGCPDetailActionPanelViewStyleConfig *config;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) IESGCPImageButton *likeButton;
@property (retain, nonatomic) IESGCPImageButton *commentButton;
@property (retain, nonatomic) IESGCPImageButton *favoriteButton;
@property (retain, nonatomic) IESGCPImageButton *shareButton;
@property (copy, nonatomic) id /* block */ likeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ commentBtnClickedBlock;
@property (copy, nonatomic) id /* block */ favoriteBtnClickedBlock;
@property (copy, nonatomic) id /* block */ shareBtnClickedBlock;

- (void)setupImageButton:(id)a0 withConfig:(id)a1;
- (void)updateCountWithButton:(id)a0 clickBeforeImageName:(id)a1 clickAfterImageName:(id)a2 buttonStatus:(BOOL)a3 buttonCount:(long long)a4 defaultWord:(id)a5;
- (void)likeButtonDidClicked;
- (void)commentButtonDidClicked;
- (void)favoriteButtonDidClicked;
- (void)shareButtonDidClicked;
- (void)setupViewWithConfig:(id)a0;
- (void)updateLikeCountWithGameAwemeModel:(id)a0;
- (void)updateFavoriteCountWithGameAwemeModel:(id)a0;
- (void)updateCommentCountWithGameAwemeModel:(id)a0;
- (void)updateShareCountWithGameAwemeModel:(id)a0;
- (void)updateButtonSpacing:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutView;
- (void)setupView;

@end
