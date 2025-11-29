@class AFDNewSchoolStoryFeedCellFrameTag, UIImageView, AWEFeedMarkView, UILabel, UIView;
@protocol AWEIronManModuleService;

@interface AFDNewSchoolStoryFeedCellTagView : UIView

@property (retain, nonatomic) AWEFeedMarkView *ironManButton;
@property (retain, nonatomic) AWEFeedMarkView *poiButton;
@property (retain, nonatomic) AWEFeedMarkView *stickerButton;
@property (retain, nonatomic) AWEFeedMarkView *mvButton;
@property (retain, nonatomic) AWEFeedMarkView *shoppingButton;
@property (retain, nonatomic) AWEFeedMarkView *platformButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;
@property (weak, nonatomic) AFDNewSchoolStoryFeedCellFrameTag *tagFrame;
@property (copy, nonatomic) id /* block */ ironManClickedBlock;
@property (copy, nonatomic) id /* block */ poiClickedBlock;
@property (copy, nonatomic) id /* block */ platformClickedBlock;
@property (copy, nonatomic) id /* block */ stickerClickedBlock;
@property (copy, nonatomic) id /* block */ mvClickedBlock;
@property (copy, nonatomic) id /* block */ shoppingClickedBlock;
@property (retain, nonatomic) id<AWEIronManModuleService> ironManModuleService;

- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (id)ironManImageForAweme:(id)a0;
- (id)ironManUIConfigModel;
- (void)ironManBtnClicked;
- (void)ironButtonConifg:(id)a0 action:(SEL)a1;
- (id)commonUIConfigModel;
- (void)poiBtnClicked;
- (void)buttonCommonConfig:(id)a0 imageName:(id)a1 action:(SEL)a2;
- (void)platformBtnClicked;
- (void)mvBtnClicked;
- (void)stickerBtnClicked;
- (void)shoppingBtnClicked;
- (void).cxx_destruct;
- (unsigned long long)currentStyle;

@end
