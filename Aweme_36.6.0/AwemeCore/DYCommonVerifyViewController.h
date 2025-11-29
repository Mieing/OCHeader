@class UIView, DYCommonVerifyModel, NSString, AWEUITextLoadingView, NSDictionary, UITableView, UIButton, UILabel;

@interface DYCommonVerifyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) DYCommonVerifyModel *model;
@property (retain, nonatomic) NSDictionary *rawData;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *scenceDescLabel;
@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (copy, nonatomic) NSString *enterUrl;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackWithEventName:(id)a0 params:(id)a1;
- (void)clickWithVerifyWay:(id)a0 rawData:(id)a1;
- (void)trackVerifyAccountResultWithIsPass:(BOOL)a0 verifyWay:(id)a1;
- (void)requstThirdVerifyWithPlatform:(unsigned long long)a0;
- (id)verifyStringWithPlatform:(unsigned long long)a0;
- (id)initWithModel:(id)a0 rawData:(id)a1;
- (void)backAction;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
