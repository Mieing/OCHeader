@class NSString, NSArray, NSDictionary, AFDCloseFriendsMomentContext;

@interface AFDCloseFriendsSettingsPanelContext : AWEPageContext <AFDCloseFriendsSettingsPanelContextProtocol>

@property (copy, nonatomic) id /* block */ bottomButtonBlock;
@property (copy, nonatomic) id /* block */ closeButtonBlock;
@property (copy, nonatomic) id /* block */ afterBatchCommitBlock;
@property (copy, nonatomic) id /* block */ backButtonBlock;
@property (copy, nonatomic) id /* block */ halfScreenDismissBlock;
@property (retain, nonatomic) AFDCloseFriendsMomentContext *momentContext;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSArray *selectedUserIDs;
@property (retain, nonatomic) NSArray *disabledUserIDs;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL shouldHandleAppearanceDelegate;
@property (copy, nonatomic) id /* block */ dismissExternalHalfContainerBlockComplete;
@property (copy, nonatomic) id /* block */ preferedContentSizeChangedBlock;
@property (nonatomic) BOOL enterFromIMOnlineStatus;
@property (nonatomic) BOOL isSpringEntrance;
@property (nonatomic) BOOL fromMomentFeed;
@property (nonatomic) BOOL fromPublish;
@property (copy, nonatomic) NSString *fromAwemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
