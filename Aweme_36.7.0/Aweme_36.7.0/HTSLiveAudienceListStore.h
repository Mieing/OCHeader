@class NSTimer, NSString, RACDisposable, HTSEventContext, HTSLiveAudienceListApi, NSArray, NSNumber, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveMonitor, IESLiveURLSchemaHandler;

@interface HTSLiveAudienceListStore : NSObject <IESLiveUserActions>

@property (retain, nonatomic) HTSLiveAudienceListApi *audienceListApi;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) NSTimer *preFetchTimer;
@property (retain, nonatomic) NSNumber *playerRankListForbiddenCode;
@property (nonatomic) BOOL cancelSmartPreload;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) NSString *requestEnterType;
@property (retain, nonatomic) NSArray *listViewModels;
@property (retain, nonatomic) NSNumber *selectedIndex;
@property (readonly, nonatomic) unsigned long long vipRankListIndex;
@property (readonly, nonatomic) NSString *currentOnLineCount;
@property (readonly, nonatomic) BOOL isInMseqRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void)realEnterRoomRefresh;
- (void)cancelPreFetchTimer;
- (void)prefetchAudienceRankList;
- (void)trackIsPreload:(BOOL)a0;
- (void)fetchAudienceRankDataWithCompletion:(id /* block */)a0;
- (void)setupSmartPreload;
- (void)checkPreloadIfPossible:(long long)a0;
- (void)collectFeatureForOpenAudienceList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end
