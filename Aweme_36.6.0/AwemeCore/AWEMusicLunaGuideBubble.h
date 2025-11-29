@class NSString, UIImageView, UILabel, UIButton;

@interface AWEMusicLunaGuideBubble : UIView

@property (retain, nonatomic) UIImageView *lunaImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *mainBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *mainBtnName;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ maiBtnTappedAction;

- (void)closeBtnTapped:(id)a0;
- (void)closeBtnTapped_IMP:(id)a0;
- (void)mainBtnTapped_IMP:(id)a0;
- (void)mainBtnTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
