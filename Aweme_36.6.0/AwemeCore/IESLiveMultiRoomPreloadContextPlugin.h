@class HTSEventContext, IESLiveInnerFeedLiveRoomItemModel, NSString, IESLiveEnterRoomBusinessParamsArray, IESLiveMultiRoomPreloadTracker, IESLiveDI, IESLiveEnterRoomAisle, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveMultiRoomPreloadContextPlugin : IESLiveMultiRoomPreloadBasePlugin <IESLiveComponentContextProvider, IESLiveTrackContextProvider>

@property (retain, nonatomic) IESLiveInnerFeedLiveRoomItemModel *itemModel;
@property (retain, nonatomic) IESLiveDI *roomDI;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveEnterRoomBusinessParamsArray *businessParams;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveMultiRoomPreloadTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParam:(id)a0;
- (id)currentComponentContext;
- (id)currentTrackContext;
- (void)configVSPropertiesWithContext:(id)a0 roomAisle:(id)a1;
- (BOOL)p_alwaysThinkFirstRoomClick;
- (id)p_buildEventContextWithItemModel:(id)a0;
- (void)p_buildBusinessParams;
- (unsigned long long)getLandscapeScene;
- (void)addBusinessParamsFromExceptFirst;
- (id)preload_buildComponentContext;
- (void)preload_createRoomAisle;
- (void)loadContext;
- (void)loadServiceBind;
- (id)getEnterRoomAisle:(BOOL)a0;
- (void).cxx_destruct;

@end
