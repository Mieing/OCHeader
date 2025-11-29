@class AWESpecialCardSubscribeSheetConfig, UIImageView, UILabel, DUXButton;
@protocol AWESpecialCardSubscribeSheetViewControllerProtocol;

@interface AWESpecialCardSubscribeSheetViewController : UIViewController

@property (retain, nonatomic) AWESpecialCardSubscribeSheetConfig *config;
@property (retain, nonatomic) UIImageView *titleIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *thumbnailInfoLabel;
@property (retain, nonatomic) DUXButton *leftButton;
@property (retain, nonatomic) DUXButton *rightButton;
@property (weak, nonatomic) id<AWESpecialCardSubscribeSheetViewControllerProtocol> delegate;

- (void)rightButtonClick:(id)a0;
- (void)setupSheetView;
- (void)updateSheet;
- (void)leftButtonClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;

@end
