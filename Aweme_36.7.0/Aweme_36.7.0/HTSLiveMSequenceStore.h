@class HTSLiveRoomStatsMessage, NSString, HTSEventContext, IESLiveMSequenceAPI, IESLiveComponentContext, NSNumber, HTSLiveUser;
@protocol IESLiveRoomService, IESLiveTimeService, IESLiveMSequenceReaction;

@interface HTSLiveMSequenceStore : NSObject <HTSLiveMessageSubscriber, IESLiveUserActions, IESLiveDataSyncDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL shouldUpdateFollowBtn;
@property (nonatomic) BOOL isShowFansGroup;
@property (nonatomic) BOOL isShowFollowBtn;
@property (copy, nonatomic) NSString *prompts;
@property (retain, nonatomic) NSNumber *audienceCount;
@property (copy, nonatomic) NSString *commonTipString;
@property (nonatomic) long long showListId;
@property (copy, nonatomic) NSString *showListName;
@property (retain, nonatomic) IESLiveMSequenceAPI *mSeqAPI;
@property (nonatomic) BOOL showingFansGroup;
@property (retain, nonatomic) id<IESLiveTimeService> timeService;
@property (nonatomic) BOOL shouldUpdateMSeqRoomFollowBtn;
@property (nonatomic) BOOL isMSeqRoomFollowed;
@property (retain, nonatomic) HTSLiveRoomStatsMessage *roomStatsMessage;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) HTSLiveUser *realRoomOwner;
@property (nonatomic) unsigned long long mseqLayout;
@property (weak, nonatomic) id<IESLiveMSequenceReaction> reaction;
@property (nonatomic) BOOL isRoomFromReturnBack;
@property (copy, nonatomic) NSString *programmeListSchema;
@property (nonatomic) BOOL showingCommonTipString;
@property (nonatomic) BOOL showingMsequenceComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)updateFollowStatus;
- (void)bindModel;
- (void)didUpdateRoom:(id)a0;
- (BOOL)isMSeqBackupRoom;
- (void)updateUserState:(id)a0;
- (void)handleOfChannelShowlistSyncData:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)refreshUserInfo;
- (void)followUser:(id)a0 trackParams:(id)a1 afterLive:(BOOL)a2;
- (void)showFansGroupViewFrom:(unsigned long long)a0;
- (void)getNextMSeqRoomID:(id /* block */)a0;
- (void)loginWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
