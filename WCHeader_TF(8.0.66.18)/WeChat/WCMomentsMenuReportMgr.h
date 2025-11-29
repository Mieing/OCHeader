@class WCDataItem, WCMomentsMenuActionReportSession, NSString, WCUserComment;

@interface WCMomentsMenuReportMgr : MMUserService <MMServiceProtocol>

@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCUserComment *comment;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) long long scene;
@property (readonly, nonatomic) long long clickedActionType;
@property (readonly, nonatomic) BOOL isShow;
@property (readonly, nonatomic) WCMomentsMenuActionReportSession *reportSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onMenuItemWillShowWithDataItem:(id)a0 comment:(id)a1 scene:(long long)a2 contentType:(long long)a3;
- (void)onClickWithDataItem:(id)a0 comment:(id)a1 scene:(long long)a2 contentType:(long long)a3 actionType:(long long)a4;
- (void)onMenuControllerDidHide:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)reportCancelActionIfNeeded;
- (BOOL)canResponseOnClickWithDataItem:(id)a0 comment:(id)a1 scene:(long long)a2 contentType:(long long)a3;
- (id)genMomentsMenuReportSessionWithActionType:(long long)a0;
- (void).cxx_destruct;

@end
