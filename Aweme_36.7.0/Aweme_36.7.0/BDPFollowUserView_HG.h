@class UIButton, UIImageView, UILabel;
@protocol BDPFollowUserViewDelegate_HG;

@interface BDPFollowUserView_HG : UIView {
    UIButton *_closeBtn;
    UIButton *_headerImgBtn;
    UIImageView *_headerImgView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UIButton *_followBtn;
    double _maxLabelWidth;
}

@property (weak, nonatomic) id<BDPFollowUserViewDelegate_HG> delegate;

+ (id)followUserView;

- (void)closeBtnClicked:(id)a0;
- (void)refreshUIWithUserInfo:(id)a0;
- (void)setupHasFollowed:(BOOL)a0;
- (void)followBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
