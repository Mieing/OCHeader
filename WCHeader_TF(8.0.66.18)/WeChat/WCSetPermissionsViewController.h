@class NSString, CContact, WCOpLog, MMTableViewInfo, NSDate;
@protocol WCSetPermissionsViewControllerDelegate;

@interface WCSetPermissionsViewController : ContactBaseSetPermissionsViewController <WCFacadeExt> {
    NSDate *m_pushInDate;
    unsigned int m_permissionOpCode;
    BOOL m_showPermissionsCell;
    CContact *m_contact;
}

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) WCOpLog *wcOpLog;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (weak, nonatomic) id<WCSetPermissionsViewControllerDelegate> delegate;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *publishId;

- (id)initWithUserName:(id)a0;
- (void)onDissmiss;
- (void)viewDidLoad;
- (void)initView;
- (void)reloadTableView;
- (void)addPermissionSection;
- (void)showPermissionsCell;
- (void)opOutsider:(id)a0;
- (void)opWCBlacklist:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)becomeOutsider:(BOOL)a0;
- (void)becomeWCBlacklist:(BOOL)a0;
- (void)onWCGroupModMemberReturn:(BOOL)a0 group:(id)a1;
- (void)onWCGroupAddMemberReturn:(BOOL)a0 group:(id)a1;
- (void)onWCGroupRemoveMemberReturn:(BOOL)a0 group:(id)a1;
- (unsigned int)getContactVerifyPermissionOpCode;
- (void)reportPermissions;
- (id)m_contact;
- (void)setM_contact:(id)a0;
- (void).cxx_destruct;

@end
