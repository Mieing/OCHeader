@class CJPayStyleButton, NSArray, NSString, UITableView;

@interface CJPayProtocolListViewController : CJPayHalfPageBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) CJPayStyleButton *nextStepButton;
@property (copy, nonatomic) NSArray *userAgreements;
@property (copy, nonatomic) id /* block */ agreeCompletion;
@property (nonatomic) BOOL showContinueButton;
@property (copy, nonatomic) id /* block */ protocolListClick;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) BOOL isForBindCardService;
@property (nonatomic) double height;
@property (nonatomic) BOOL isShowTitleNubmer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)nextStepButtonAction;
- (void)p_bindCardProtocolListClick:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithHeight:(double)a0;
- (double)containerHeight;

@end
