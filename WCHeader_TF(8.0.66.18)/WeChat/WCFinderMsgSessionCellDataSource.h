@class NSMutableDictionary, NSString, WCTableSessionStorage, WCFinderTopBannerCellViewModel, WCFinderMsgSessionAliasEntranceCellViewModel;
@protocol WCFinderMsgSessionCellDataSourceDelegate;

@interface WCFinderMsgSessionCellDataSource : NSObject <WCFinderMsgSessionMgrExt>

@property (retain, nonatomic) WCTableSessionStorage *sessionStorage;
@property (retain, nonatomic) NSMutableDictionary *sessionId2ViewModelDic;
@property (retain, nonatomic) WCFinderTopBannerCellViewModel *topBannerCellViewModel;
@property (retain, nonatomic) WCFinderMsgSessionAliasEntranceCellViewModel *aliasEntranceCellViewModel;
@property (nonatomic) BOOL ownerInvalid;
@property (weak, nonatomic) id<WCFinderMsgSessionCellDataSourceDelegate> delegate;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int myAccountType;
@property (nonatomic) BOOL isGreetMsgSessionList;
@property (nonatomic) BOOL hasAliasInfo;
@property (readonly, nonatomic) BOOL showAliasSessionCell;

- (id)description;
- (id)initWithSessionStorage:(id)a0;
- (long long)sessionCount;
- (id)sessionInfoAtIndex:(long long)a0;
- (id)sessionInfoWithUsrName:(id)a0;
- (id)sessionCellViewModelAtIndex:(long long)a0;
- (void)openGreetMsgSessionViewControllerFromNav:(id)a0;
- (void)openChatWithViewModel:(id)a0 fromNav:(id)a1 chatContentReporter:(id)a2;
- (void)onFinderMsgAliasSessionOwnerChanged;
- (void)onFinderMsgSessionUpdated;
- (void).cxx_destruct;

@end
