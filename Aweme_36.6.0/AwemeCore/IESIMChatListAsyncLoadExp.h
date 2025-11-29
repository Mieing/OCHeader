@interface IESIMChatListAsyncLoadExp : NSObject

@property (class, readonly, nonatomic) BOOL enableChatCellCompAsyncUpdate;
@property (class, readonly, nonatomic) BOOL fixNameExtendMgrCompAsyncIssue;
@property (class, readonly, nonatomic) BOOL adjustMessageStateCompKVO;
@property (class, readonly, nonatomic) BOOL chatModelOfficialRoleTagSupportAtomic;
@property (class, readonly, nonatomic) BOOL adjustLiveStatusCompKVO;
@property (class, readonly, nonatomic) BOOL fixUserManagerTimerAsyncIssue;
@property (class, readonly, nonatomic) BOOL fixReadSnapshotStorageCrash;
@property (class, readonly, nonatomic) BOOL componentPresenterSupportAtomic;
@property (class, readonly, nonatomic) BOOL adjustSnapshotArchiveThread;
@property (class, readonly, nonatomic) BOOL updateRenderPresenterAfterCellRenderDispatch;
@property (class, readonly, nonatomic) BOOL fixOfficialRoleTagCycleCall;
@property (class, readonly, nonatomic) BOOL fixOnlineIssueIn3660;

@end
