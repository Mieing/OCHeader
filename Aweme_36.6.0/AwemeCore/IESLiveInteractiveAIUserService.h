@class NSMutableArray, IESLiveInteractiveUserServiceConfig;

@interface IESLiveInteractiveAIUserService : NSObject

@property (retain, nonatomic) NSMutableArray *allAiUserList;
@property (retain, nonatomic) NSMutableArray *currentRoomAiUserList;
@property (retain, nonatomic) NSMutableArray *otherRoomAiUserList;
@property (nonatomic) BOOL aiUserListUpdate;
@property (retain, nonatomic) IESLiveInteractiveUserServiceConfig *config;

- (id)initWithConfig:(id)a0 diContext:(id)a1;
- (id)userByUserId:(id)a0;
- (id)userByLinkmicId:(id)a0;
- (void)addAiUserModelList:(id)a0;
- (void)addAiUserModel:(id)a0;
- (void)removeAiUserModelWithUid:(id)a0;
- (id)userByBelongToUserId:(id)a0;
- (void)updateModelWithOriginModel:(id)a0 newModel:(id)a1;
- (void).cxx_destruct;
- (void)removeAll;

@end
