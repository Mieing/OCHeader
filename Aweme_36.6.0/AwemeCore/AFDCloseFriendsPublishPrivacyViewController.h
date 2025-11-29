@class UIView, NSString, NSArray, AWESocialRelationObserver, AFDCloseFriendsPrivacyOptionModel, UITableView, DUXButton, UIViewController, UILabel;
@protocol AFDHalfScreenHostViewControllerProtocol;

@interface AFDCloseFriendsPublishPrivacyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AFDHalfScreenPresentationProtocol, AFDHalfScreenDelegate> {
    UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *grabBar;
@property (retain, nonatomic) UILabel *panelTitle;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXButton *publishBtn;
@property (retain, nonatomic) NSArray *privacyOptions;
@property (retain, nonatomic) AFDCloseFriendsPrivacyOptionModel *currentSelectedOption;
@property (nonatomic) long long defaultVisibleStatus;
@property (retain, nonatomic) AWESocialRelationObserver *closeFriendsCountObserver;
@property (copy, nonatomic) id /* block */ didSelectPrivacyBlock;
@property (copy, nonatomic) id /* block */ publishMomentBlock;
@property (nonatomic) long long mode;

- (id)publishButtonText;
- (BOOL)wantsDimmingView;
- (void)clickPublishBtn;
- (void)setUpPublishPrivacy;
- (double)adaptiveCellHeight;
- (void)setupCurrentSelectedPrivacy:(id)a0 isClick:(BOOL)a1;
- (id)closeFriendsPrivacyOption;
- (id)friendsPrivacyOption;
- (void)updatePublishButtonWithOption:(id)a0 IsClick:(BOOL)a1;
- (id)initWithDefaultPrivacy:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
