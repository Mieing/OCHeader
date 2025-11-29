@class UITableView, QBASIHTTPRequest, NSString, UIViewController;

@interface QBASIAuthenticationDialog : QBASIAutorotatingViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain) UITableView *tableView;
@property (retain) QBASIHTTPRequest *request;
@property int type;
@property BOOL didEnableRotationNotifications;
@property (retain, nonatomic) UIViewController *presentingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)presentAuthenticationDialogForRequest:(id)a0;
+ (void)dismiss;

- (id)init;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;
- (void)orientationChanged:(id)a0;
- (id)textFieldInRow:(unsigned long long)a0 section:(unsigned long long)a1;
- (id)usernameField;
- (id)passwordField;
- (id)domainField;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismiss;
- (void)showTitle;
- (void)show;
- (void)cancelAuthenticationFromDialog:(id)a0;
- (id)requestsRequiringTheseCredentials;
- (void)presentNextDialog;
- (void)loginWithCredentialsFromDialog:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end
