@class IESLiveMSeqAnchorApi, NSString, HTSLiveUser, HTSEventContext, IESLiveComponentContext, HTSLiveRoomAPI;
@protocol IESLiveRoomService, IESLiveTimeService, MSequenceAnchorReaction;

@interface IESLiveMSeqAnchorStore : NSObject <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *prompts;
@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) id<IESLiveTimeService> timeService;
@property (retain, nonatomic) IESLiveMSeqAnchorApi *mseqAnchorApi;
@property (retain, nonatomic) HTSLiveRoomAPI *mSeqAPI;
@property (copy, nonatomic) NSString *commonTipString;
@property (nonatomic) long long showListId;
@property (copy, nonatomic) NSString *showListName;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (weak, nonatomic) id<MSequenceAnchorReaction> reaction;
@property (retain, nonatomic) HTSLiveUser *channelUser;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *programmeListSchema;
@property (nonatomic) BOOL showingCommonTipString;
@property (nonatomic) BOOL showingMsequenceComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (void)subscribedSyncDataUpdatedWithValue:(id)a0 oldVersion:(long long)a1 newVersion:(long long)a2;
- (void)didUpdateRoom:(id)a0;
- (void)handleOfChannelShowlistSyncData:(id)a0;
- (void)refreshUserInfo;
- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)addFakeNotifyMessage:(id)a0;
- (void)grabMicWithMessage:(id)a0;
- (void)updateGrabMicState:(BOOL)a0 withMessage:(id)a1;
- (void)updateRoomChannelExtra;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
