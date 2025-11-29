@class MMBrandHeadImageView, NSString, NSArray, UIView, UIButton, UITableView, NSMutableArray, OauthScopeInfo, UILabel;
@protocol MMAuthorizeViewControllerDelegate;

@interface OpenSDKScopeConfirmViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate> {
    UILabel *_titleLabel;
    UIView *_titleSplitLine;
    MMBrandHeadImageView *_appIconImageView;
    UILabel *_scopeDescriptionLabel;
    UIView *_tableSplitLine;
    UITableView *_scopeTableView;
    UIView *_buttonSplitLine;
    UIView *_buttonVerticalSpliteLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    NSMutableArray *_arrSelect;
    NSString *_confirmRediretUrl;
    int _errCode;
    NSString *_errMsg;
}

@property (nonatomic) BOOL isforcedRotationToPortrait;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) OauthScopeInfo *scopeInfo;
@property (weak, nonatomic) id<MMAuthorizeViewControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *scopeInfoList;
@property (readonly, nonatomic) NSArray *comfirmScopeInfoList;
@property (nonatomic) unsigned int fromScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppName:(id)a0 iconUrl:(id)a1 scopeInfoList:(id)a2;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (id)titleText;
- (void)viewDidLayoutSubviews;
- (unsigned long long)designContentWidth;
- (double)designNoTableContentHeightToContentWidthRatio;
- (double)designTableHeightRatio;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)totalTableHeightWithWidth:(float)a0;
- (void)onOAuthCancel;
- (void)onClickButtonConfirm:(id)a0;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;

@end
