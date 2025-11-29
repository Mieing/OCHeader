@class UIView, NSString, NSArray, MMFinderLiveConnectMicPKInfo, UIImageView, UIButton, UILabel, MMTableView;
@protocol MMFinderLiveConnectMicAnchorPkContainerViewDelegate;

@interface MMFinderLiveConnectMicAnchorPkContainerView : MMFinderLiveConnectMicBaseContainerView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSArray *micUsers;
@property (retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *pkTitleLabel;
@property (retain, nonatomic) UIImageView *pkIcon;
@property (retain, nonatomic) UIButton *closeMicButton;
@property (retain, nonatomic) UIButton *extraCloseMicButton;
@property (retain, nonatomic) UIButton *pkActionButton;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (nonatomic) BOOL isPkDisabled;
@property (nonatomic) BOOL isApplicant;
@property (weak, nonatomic) id<MMFinderLiveConnectMicAnchorPkContainerViewDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMicUsers:(id)a0 disablePk:(BOOL)a1 isApplicant:(BOOL)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)initViews;
- (void)reCreatePkButton;
- (void)updatePkInfo:(id)a0;
- (void)layoutSubviews;
- (id)mainScrollView;
- (void)closeAction;
- (void)onClickCloseMic;
- (void)onTapPkAction;
- (void)requestDismiss:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
