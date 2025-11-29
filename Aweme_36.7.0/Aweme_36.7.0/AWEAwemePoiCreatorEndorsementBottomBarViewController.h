@class NSString, AWEAwemeModel, UIView, UILabel, DUXButton;

@interface AWEAwemePoiCreatorEndorsementBottomBarViewController : UIViewController <AWEPOICreatorEndorsementViewControllerProtocol>

@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) UIView *bottomBarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) DUXButton *actionButtonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadWithAweme:(id)a0;
- (void)actionBarDidTaped;
- (void)p_updateUIWithNewButtonInfo:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
