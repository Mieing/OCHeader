@class UIImageView, UILabel, UIButton;

@interface WCFinderStartLiveHalfScreenViewController : MMUIHalfScreenViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *certainButton;
@property (copy, nonatomic) id /* block */ startLiveAction;
@property (nonatomic) unsigned int startLiveScene;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)initButton;
- (BOOL)isHideCloseButton;
- (void)updateUI;
- (void)startLive;
- (void)cancel;
- (void).cxx_destruct;

@end
