@class IESLiveAnchorFansClubModeSettingStore, UITextView, NSString, UILabel, UIView, UITableView;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveAnchorFansClubModeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) IESLiveAnchorFansClubModeSettingStore *store;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITextView *noticeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addHideGesture;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithStore:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setupViews;

@end
