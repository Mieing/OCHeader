@class UITableView, NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESLiveLongPressNotificationView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *secUid;
@property (retain, nonatomic) UILabel *nickName;
@property (nonatomic) long long choice;
@property (nonatomic) BOOL setFailure;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) BOOL hasMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPersonalRecommendSwitchOn;
- (void)hideMask;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 closeButton:(BOOL)a1 avatar:(BOOL)a2 mask:(BOOL)a3 userID:(id)a4 secUserID:(id)a5 choice:(long long)a6;
- (void)addMaskIfNeededWithSuperview:(id)a0;
- (BOOL)getSetFailure;
- (long long)getSelectedChoice;
- (id)getTableViewCellAtFirstSection;
- (id)getTableViewCellAtSecondSection:(id)a0;
- (id)getTableViewCellAtThirdSection;
- (id)getTableViewCellAtFourthSection;
- (void)updateChoice:(id)a0;
- (void)setName:(id)a0;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)setupUI;
- (void)closeButtonTapped:(id)a0;

@end
