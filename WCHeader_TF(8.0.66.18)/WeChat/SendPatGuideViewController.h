@class UIButton, MMUILabel;

@interface SendPatGuideViewController : MMPageSheetBaseViewController

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) unsigned long long guideType;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)viewDidLoad;
- (void)configPageSheet;
- (void)viewDidTransitionToNewSize;
- (void)configDetailView;
- (void)updateContent;
- (void)updateDetailViewLayout:(id)a0;
- (void)onTapConfirmButton;
- (void)showWithAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
