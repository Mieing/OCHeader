@class UIView, IESLiveWaitingListUser, NSString, IESLivePKGuestInteractiveListView, UIImageView, UIButton, IESLivePKGuestApplyListBottomView, IESLivePKGuestApplyListPopUpViewConfig, UILabel;
@protocol IESLivePKGuestApplyListPopUpViewDelegate, IESLivePKGuestApplyListPopUpViewDataSource, IESLiveCompoundSubscription;

@interface IESLivePKGuestApplyListPopUpView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<IESLivePKGuestApplyListPopUpViewDelegate> delegate;
@property (retain, nonatomic) IESLivePKGuestApplyListPopUpViewConfig *config;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *headerContainerView;
@property (retain, nonatomic) UIImageView *topLeftIamgeView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIButton *linkMicBtn;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) IESLivePKGuestInteractiveListView *applyListView;
@property (weak, nonatomic) id<IESLivePKGuestApplyListPopUpViewDataSource> dataSource;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) IESLivePKGuestApplyListBottomView *bottomInfoView;
@property (retain, nonatomic) UIView *applyListHeaderView;
@property (retain, nonatomic) UILabel *applyListHeaderLeftLabel;
@property (retain, nonatomic) UILabel *applyListHeaderRightLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *waitingUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateTopAreaUI;
- (void)bindDataProvider;
- (BOOL)p_isSortByApplyTime;
- (void)requestActivityForSite:(unsigned long long)a0;
- (void)setupApplyListUI;
- (void)p_initApplyListView;
- (void)showUserPreView:(id)a0 trackerLabel:(id)a1;
- (id)p_normalApplyUserList;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 dataSource:(id)a2;
- (id)p_getProperSubStringWithEmojiString:(id)a0 limitLength:(long long)a1;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
