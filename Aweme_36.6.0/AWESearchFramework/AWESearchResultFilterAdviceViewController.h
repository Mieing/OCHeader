@class AWERiskPreventModel, AWESearchBlankView, NSString, UILabel, UIView;

@interface AWESearchResultFilterAdviceViewController : UIViewController <AWESearchResultFilterAdviceViewControllerProtocol>

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *phoneContactContainerView;
@property (retain, nonatomic) UILabel *contactTipsLabel;
@property (retain, nonatomic) UILabel *contactPhoneLabel;
@property (retain, nonatomic) UIView *adviceContainerView;
@property (retain, nonatomic) UILabel *adviceTipsLabel;
@property (retain, nonatomic) AWESearchBlankView *searchBlankView;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)phoneContactTapped;
- (void)adviceTapped;
- (void)configRiskPreventModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setup;

@end
