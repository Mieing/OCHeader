@class UIView, NSString, UIImageView, UITextView, UITableView, DUXCheckBox, UIButton, DUXButton, UILabel, NSDictionary;

@interface AWEOPRealNameINCScopeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *clientIconView;
@property (retain, nonatomic) UILabel *clientIconName;
@property (retain, nonatomic) UILabel *applyLabel;
@property (retain, nonatomic) UIButton *tipsIconView;
@property (retain, nonatomic) UILabel *authTitle;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UITextView *protocolTextView;
@property (retain, nonatomic) DUXButton *refuseButton;
@property (retain, nonatomic) DUXButton *allowButton;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showContainerView;
- (void)hideContainerView;
- (void)allowClick;
- (void)dismissSelf:(BOOL)a0;
- (void)tipsClick;
- (void)refuseClick;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
