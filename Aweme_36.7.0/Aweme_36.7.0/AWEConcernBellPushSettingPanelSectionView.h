@class UIButton, NSArray, UIImageView, NSString, UILabel, AWEUserModel, UITableView;
@protocol AWEConcernBellPushSettingPanelSectionViewDelegate;

@interface AWEConcernBellPushSettingPanelSectionView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) unsigned long long bellPushType;
@property (retain, nonatomic) NSArray *strategyDatas;
@property (nonatomic) unsigned long long selectedStrategy;
@property (nonatomic) long long userFollowStatus;
@property (retain, nonatomic) AWEUserModel *toUser;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIButton *permissionButton;
@property (nonatomic) BOOL permissionSettingRelationEnable;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *trackParaEnterFrom;
@property (copy, nonatomic) NSString *trackParaEnterMethod;
@property (nonatomic) long long isGuide;
@property (weak, nonatomic) id<AWEConcernBellPushSettingPanelSectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)initViews;
- (void)updatePermissionRelationStatus;
- (BOOL)isGaryViewAndTableView;
- (void)changeBellPushStrategy:(unsigned long long)a0 oldStrategy:(unsigned long long)a1;
- (void)trackNewVideoNotificationSwitchWithOldStrategy:(unsigned long long)a0 newStrategy:(unsigned long long)a1;
- (void)trackLiveSdkNotificationSwitchWithOldStrategy:(unsigned long long)a0 newStrategy:(unsigned long long)a1;
- (void)p_clickPermissionButton:(id)a0;
- (id)initWithBellPushType:(unsigned long long)a0 toUser:(id)a1 isGuide:(long long)a2 trackParaEnterFrom:(id)a3 trackParaEnterMethod:(id)a4;
- (void)forceUpdatePermissionRelationStatusEnable;
- (void)updateSelectedStrategy:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)sectionHeight;

@end
