@class NSString, UIImageView, UILabel, IESLiveUserCountUpdateApi, UIButton;

@interface IESLiveUserCountSettingView : UIView

@property (retain, nonatomic) UIButton *UVbutton;
@property (retain, nonatomic) UIButton *PVbutton;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) int currentType;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL clicking;
@property (retain, nonatomic) IESLiveUserCountUpdateApi *updateApi;
@property (retain, nonatomic) NSString *pvCountIntro;
@property (retain, nonatomic) NSString *uvCountIntro;
@property (retain, nonatomic) NSString *pvCountUrl;
@property (retain, nonatomic) NSString *uvCountUrl;
@property (copy, nonatomic) id /* block */ userTypeDidChange;

- (void)confirmButtonDidClick:(id)a0;
- (id)buildTitleLabel:(id)a0;
- (void)updateConfirmButton;
- (id)initWithAudienceDisplayType:(int)a0;
- (void)setupResource;
- (id)buildContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)buildButtonWithTitle:(id)a0 isChosen:(BOOL)a1;
- (void)UVButtonDidClick:(id)a0;
- (void)PVButtonDidClick:(id)a0;
- (void)updatebutton:(id)a0 chosen:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateContentView;
- (void)setupUI;
- (void)updateContent:(id)a0;

@end
