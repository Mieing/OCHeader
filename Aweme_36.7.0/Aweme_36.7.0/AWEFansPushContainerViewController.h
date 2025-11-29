@class NSString, AWEButton;

@interface AWEFansPushContainerViewController : UIViewController <AWEActionSheetDelegate, DUXActionSheetDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEButton *moreFunctionButton;
@property (retain, nonatomic) NSString *userUrgeButtonText;
@property (retain, nonatomic) NSString *myUrgeButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)buttonTexts;
- (void)didClickedButton:(id)a0;
- (void)backBtnClicked:(id)a0;
- (id)getParams;
- (void)moreFunctionButtonClicked:(id)a0;
- (void)trackDidClickMoreButton;
- (void)toggleUrgeReminder;
- (void)trackDidClickForwardViewButton;
- (void)trackCloseRemind;
- (void)trackOpenRemind;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
