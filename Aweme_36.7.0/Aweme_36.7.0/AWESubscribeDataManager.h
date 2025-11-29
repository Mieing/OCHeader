@class IESIMStorage, NSString, NSTimer, AWEIMSubscribeListResponse, AWEIMChatModel;
@protocol AWESubscribeDataManagerDelete;

@interface AWESubscribeDataManager : NSObject <AWEUserMessage, IESIMSubscribeDataManagerProtocol>

@property (retain, nonatomic) AWEIMSubscribeListResponse *model;
@property (nonatomic) BOOL fetchingRemoteData;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long hintCardId;
@property (nonatomic) long long hintReceiveTime;
@property (retain, nonatomic) IESIMStorage *subscribeStore;
@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (nonatomic) double lastRequestTimestamp;
@property (weak, nonatomic) id<AWESubscribeDataManagerDelete> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)__addObserver;
- (void)handleEnterMessageTabEvent;
- (void)setSubscribeMute:(BOOL)a0 reqResult:(id /* block */)a1;
- (void)updateChatlistForCards:(id)a0;
- (void)tabbarControllerDidChangeIndex:(id)a0;
- (void)fetchPreloadDatalist;
- (id)__converChatModelForSubscribeListModel:(id)a0;
- (void)__updateChatModel:(id)a0;
- (void)__updateDataForMuteState:(BOOL)a0;
- (void)__updateLocalModelInfo:(id)a0;
- (long long)__muteTime;
- (void)removeOfficialChat:(id)a0;
- (void)setSubscribeRead:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;
- (void)dealloc;

@end
