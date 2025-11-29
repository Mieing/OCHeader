@class NSMutableDictionary, NSString, NSMutableSet, IESLiveIMBizDispatchConfig;
@protocol IESLiveIMMessageFilter, IESLiveDataSyncService, IESLiveIMMessageReciever;

@interface IESLiveChatChannelMessageDispatcher : IESLiveIMBaseDispatcher <IESLiveChatChannelDispatchProvider>

@property (retain, nonatomic) NSMutableSet *channelIDSet;
@property (retain, nonatomic) NSMutableDictionary *chatChannelFilterDic;
@property (retain, nonatomic) NSMutableDictionary *chatChannelDupFilterDic;
@property (retain, nonatomic) IESLiveIMBizDispatchConfig *dispatchConfig;
@property (weak, nonatomic) id<IESLiveDataSyncService> wrdsManager;
@property (nonatomic) BOOL enableMessageReplay;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveIMMessageFilter> nextFilter;
@property (nonatomic) long long ntpDiffTime;
@property (nonatomic) BOOL useHeartBeatSEI;

- (void)didSetAttachingDIContext;
- (void)dispatchMessage:(id)a0 needFilter:(BOOL)a1;
- (void)cleanCaches;
- (void)addFilterMessage:(id)a0;
- (id)getMessages:(long long)a0 withCount:(long long)a1;
- (void)joinChannelWithId:(id)a0;
- (void)quitChannelWithId:(id)a0;
- (BOOL)shouldDispatchMessageAfterFakedFilter:(id)a0;
- (void)updateChannelIDArray:(id)a0;
- (BOOL)shouldDispatchMessage:(id)a0;
- (void)didReceiveFirstBatchMessages:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
