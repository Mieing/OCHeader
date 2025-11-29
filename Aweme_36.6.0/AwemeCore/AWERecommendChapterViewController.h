@class DUXButton, UILabel, AWEAwemeModel, BDImageView;

@interface AWERecommendChapterViewController : UIViewController

@property (retain, nonatomic) BDImageView *topImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)handleClickConfirmButton;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
