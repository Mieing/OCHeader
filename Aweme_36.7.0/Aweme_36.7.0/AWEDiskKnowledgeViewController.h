@class UILabel, NSString, UIView;

@interface AWEDiskKnowledgeViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UILabel *cacheTitleLabel;
@property (retain, nonatomic) UILabel *cacheDescLabel;
@property (retain, nonatomic) UILabel *cacheDescLabel1;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *operationLabel;
@property (retain, nonatomic) UILabel *operationDescLabel;
@property (retain, nonatomic) UILabel *operationDescLabel1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClick;
- (void)creatUI;
- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (void)viewDidLoad;
- (id)appDisplayName;

@end
