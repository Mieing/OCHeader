@class HTSLiveUser, HTSEventContext, NSArray, IESLiveAdministerSettingApi, NSString, NSMutableArray, GPBInt64ObjectDictionary;
@protocol IESLiveSubscription, IESLiveRoomService, IESLiveAdminSettingReaction;

@interface IESLiveAdminSettingStore : NSObject <IESLiveAdminSettingAction>

@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) IESLiveAdministerSettingApi *administerSettingApi;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) NSMutableArray *generalItems;
@property (retain, nonatomic) NSMutableArray *seniorItems;
@property (weak, nonatomic) id<IESLiveAdminSettingReaction> reaction;
@property (retain, nonatomic) HTSLiveUser *currentAdministerUserInfo;
@property (nonatomic) long long index;
@property (nonatomic) long long seniorMaxAdminCount;
@property (retain, nonatomic) NSArray *administers;
@property (copy, nonatomic) GPBInt64ObjectDictionary *privilegeExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setupItems;
- (void)setUpNewStyleItems;
- (void)fetchAdminOperateAudienceStatus:(id /* block */)a0;
- (void)toggleAdminOperateAudienceEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateAdminSettings:(int)a0 removedUserID:(id)a1;
- (void)p_trackPrivilegeClicked:(BOOL)a0;
- (void)p_trackAdminRight:(BOOL)a0;
- (void)itemActionWithItem:(id)a0 cell:(id)a1 isSenior:(BOOL)a2;
- (void)addItemsToArray:(id)a0 titles:(id)a1 details:(id)a2 privileges:(id)a3 startIndex:(int)a4;
- (id)incrementalUpdate:(int)a0 on:(BOOL)a1;
- (void)changePrivilege:(int)a0 isAdd:(BOOL)a1;
- (void)trackPrivilegeChangeWithItem:(id)a0;
- (BOOL)isLastPrivilege;
- (BOOL)isSeniorPrivilegeOverMax:(int)a0;
- (id)overCountToastWithType:(id)a0;
- (void)p_trackPrivilegeChangeEvent:(id)a0 isOn:(BOOL)a1;
- (id)initWithLiveRoom:(id)a0;
- (id)initWithLiveRoom:(id)a0 administerUserInfo:(id)a1 index:(long long)a2 seniorMaxAdminCount:(long long)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)updateCell;

@end
