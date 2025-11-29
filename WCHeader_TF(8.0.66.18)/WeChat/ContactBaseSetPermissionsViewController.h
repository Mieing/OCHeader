@class NSString, CContact;
@protocol SetPermissionsViewControllerDelegate;

@interface ContactBaseSetPermissionsViewController : MMUIViewController <IOplogExt>

@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) NSString *m_moreLimitFootTitle;
@property (nonatomic) BOOL m_bIsDisableAllPermissionContact;
@property (weak, nonatomic) id<SetPermissionsViewControllerDelegate> viewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowSetPermissionsWithUserName:(id)a0;

- (void)reloadTableView;
- (void)operateSuccess;
- (void)operateFail;
- (void)opSocialBlackPermission;
- (void)opAllPermission;
- (void)doOpAddOrRemoveSocialBlackPermission:(BOOL)a0;
- (void)realDoSocialBlackWithModType:(long long)a0;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void).cxx_destruct;

@end
