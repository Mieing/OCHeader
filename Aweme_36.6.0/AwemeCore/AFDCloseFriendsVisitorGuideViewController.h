@class DUXButton, NSString;

@interface AFDCloseFriendsVisitorGuideViewController : UIViewController <DUXSheetDelegate>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) DUXButton *knowButton;
@property (retain, nonatomic) DUXButton *seeVisitorButton;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ onClickSeeVisitorButtonBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetWillDismiss:(id)a0;
- (void)trackShowEvent;
- (id)alertConfigDict;
- (id)defaultAlertConfigDict;
- (id)itemOneText;
- (id)createItemViewWithIcon:(id)a0 text:(id)a1;
- (id)itemTwoText;
- (void)onClickKnowButton:(id)a0;
- (void)onClickSeeVisitorButton:(id)a0;
- (void)trackClickEventWithType:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
