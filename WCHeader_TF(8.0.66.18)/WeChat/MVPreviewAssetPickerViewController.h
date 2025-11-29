@class MMMusicPostAssetPickerHandler, UIView, MMUIButton, NSMutableArray;

@interface MVPreviewAssetPickerViewController : MMMusicPostVideoViewController

@property (retain, nonatomic) UIView *bottomBar;
@property (retain, nonatomic) MMUIButton *finishButton;
@property (retain, nonatomic) MMMusicPostAssetPickerHandler *pickerHandler;
@property (retain, nonatomic) NSMutableArray *selectedArray;
@property (copy, nonatomic) id /* block */ onFinishPickAssetsHandler;
@property (copy, nonatomic) id /* block */ onCancelPickAssetsHandler;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutFinishButton;
- (void)onFinishButtonClicked;
- (void)setupSubviews;
- (void)doClickCloseWithNeedAnimated:(BOOL)a0 action:(long long)a1;
- (void)handleSelectedAssetUpdated:(id)a0;
- (void).cxx_destruct;

@end
