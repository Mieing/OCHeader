@class NSArray, NSMutableDictionary, NSString, IESLiveLinkmicGuestLinkerUser;
@protocol IESLiveUserService, IESLiveLinkmicUserServiceDataSource, IESLiveLinkmicUser, IESLiveLinkmicUserServiceDelegate;

@interface IESLiveInteractionGuestLinkerUserService : NSObject <IESLiveLinkmicUserServiceDataSource, IESLiveInteractionGuestLinkerUserService>

@property (retain, nonatomic) NSArray *linkedUserWrapperList;
@property (retain, nonatomic) NSMutableDictionary *audioReportMap;
@property (weak, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) NSArray *watchedUserList;
@property (retain, nonatomic) IESLiveLinkmicGuestLinkerUser *currentLinkerUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDelegate> delegate;
@property (readonly, nonatomic) NSArray *linkedUserList;
@property (readonly, nonatomic) NSArray *waitingUserList;
@property (readonly, nonatomic) id<IESLiveLinkmicUser> me;
@property (readonly, nonatomic) long long meLinkType;

- (id)userByUserId:(id)a0;
- (void)reloadLinkedList;
- (id)userByLinkmicId:(id)a0;
- (id)userBySecUserId:(id)a0;
- (id)createEmptyUserWithLinkmicID:(id)a0;
- (void)reloadLinkedListWithListChanged:(id)a0;
- (id)audioReportForStrUid:(id)a0 config:(id)a1;
- (BOOL)updateSomeoneSpeakingChange:(id)a0 talking:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)channelID;
- (id)dataSource;
- (void)removeAll;

@end
