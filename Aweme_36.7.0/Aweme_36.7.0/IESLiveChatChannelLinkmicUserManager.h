@class NSArray, NSString, RoomChannelInfo, NSMutableSet, IESLiveChatChannelLinkmicAPI, NSMutableArray, IESLiveGCDTimer;
@protocol IESLiveChannelDataSyncService, IESLiveLinkmicUserServiceDataSource, IESLiveLinkmicUserServiceDelegate, IESLiveLinkmicUser, IESLiveRoomService;

@interface IESLiveChatChannelLinkmicUserManager : NSObject <IESLiveLinkmicUserServiceDataSource, IESLiveDataSyncDelegate, IESLiveLinkmicUserServiceInterface>

@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveChannelDataSyncService> dataSyncService;
@property (retain, nonatomic) NSMutableArray *linkedUserListArray;
@property (retain, nonatomic) NSMutableArray *waitingUserListArray;
@property (retain, nonatomic) NSMutableSet *rtcUserLinkmicIDSet;
@property (retain, nonatomic) IESLiveChatChannelLinkmicAPI *api;
@property (retain, nonatomic) IESLiveGCDTimer *checkLinkersTimer;
@property (nonatomic) double checkLinkersTimeInterval;
@property (nonatomic) BOOL shouldReportCheckLinkers;
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

+ (id)wrapLiveUser:(id)a0;
+ (id)wrapUserArray:(id)a0;
+ (id)wrapUser:(id)a0;
+ (id)wrapLinkmicUser:(id)a0;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1 forChannel:(id)a2;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2 forChannel:(id)a3;
- (id)userByUserId:(id)a0;
- (id)linkedUserList;
- (id)waitingUserList;
- (id)initWithChannelInfo:(id)a0 diContext:(id)a1;
- (void)reloadLinkedList;
- (void)insertRTCUser:(id)a0;
- (void)removeRTCUser:(id)a0;
- (void)updateUserMute:(id)a0 mute:(BOOL)a1;
- (void)updateUserVolume:(id)a0 volume:(long long)a1;
- (void)updateUserListWithChannelListlUserArray:(id)a0;
- (void)startCheckLinkersIfNeeded;
- (id)formattedUserList:(id)a0;
- (void)stopCheckLinkers;
- (void)updateUserListWithLinkmicUserArray:(id)a0;
- (BOOL)isCurrentCheckLinkersReporter;
- (id)userByLinkmicId:(id)a0;
- (id)userBySecUserId:(id)a0;
- (id)createEmptyUserWithLinkmicID:(id)a0;
- (void)reloadLinkedListWithListChanged:(id)a0;
- (id)waitingUserBySecUserId:(id)a0;
- (id)me;
- (void).cxx_destruct;
- (id)channelID;
- (id)dataSource;
- (void)removeAll;
- (void)setup;
- (void)clean;

@end
