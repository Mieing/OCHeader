@class IESLiveMultiInteractUserService, NSArray, NSString;
@protocol IESLiveLinkmicUserServiceDelegate, IESLiveLinkmicUser, IESLiveLinkmicUserServiceDataSource;

@interface IESLiveInteractionLinkerServiceUserServiceAdapter : NSObject <IESLiveLinkmicUserServiceInterface>

@property (retain, nonatomic) IESLiveMultiInteractUserService *userService;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveLinkmicUserServiceDelegate> delegate;
@property (readonly, nonatomic) NSArray *linkedUserList;
@property (readonly, nonatomic) NSArray *waitingUserList;
@property (readonly, nonatomic) id<IESLiveLinkmicUser> me;
@property (readonly, nonatomic) long long meLinkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userByUserId:(id)a0;
- (void)reloadLinkedList;
- (id)userByLinkmicId:(id)a0;
- (id)userBySecUserId:(id)a0;
- (id)createEmptyUserWithLinkmicID:(id)a0;
- (void)reloadLinkedListWithListChanged:(id)a0;
- (id)initWithUserService:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;

@end
