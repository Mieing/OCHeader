@class UIImageView, NSDictionary, UILabel, AWEButton;

@interface AWEShareReportViewController : UIViewController

@property (retain, nonatomic) UIImageView *exclamationImageView;
@property (retain, nonatomic) NSDictionary *commitParams;
@property (retain, nonatomic) UILabel *reportLabel;
@property (retain, nonatomic) UILabel *detailReportLabel;
@property (retain, nonatomic) AWEButton *makeSureReportButton;
@property (copy, nonatomic) id /* block */ reshowCardView;
@property (retain, nonatomic) NSDictionary *reportEventDictionary;

- (id)initWithReportParams:(id)a0 reportEventDictionary:(id)a1 reShowCardViewBlock:(id /* block */)a2;
- (void)navigationBarStyleSettings;
- (void)reshowAlert;
- (void)makeSureChooseFinalReport;
- (void)tapToDismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupUI;
- (void)cancelButtonClicked;

@end
