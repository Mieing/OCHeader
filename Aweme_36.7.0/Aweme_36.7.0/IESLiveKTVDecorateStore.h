@class IESLiveKTVDecorateApi, NSArray, HTSEventContext, NSString, IESLiveKTVDecorateMidiViewModel;
@protocol IESLiveKTVCommonOuterService;

@interface IESLiveKTVDecorateStore : NSObject <HTSLiveMessageSubscriber, IESLiveKTVActions, IESLiveKTVDecorateReaction, IESLiveKTVDecorateService, IESLiveDataSyncDelegate> {
    struct IESLiveKTVYellowDotInfo { NSString *key; long long version; } yellowDotInfoStruct;
}

@property (retain, nonatomic) IESLiveKTVDecorateApi *api;
@property (copy, nonatomic) NSArray *tagList;
@property (copy, nonatomic) NSArray *midiList;
@property (nonatomic) BOOL shouldShowYellowDot_prop;
@property (nonatomic) struct IESLiveKTVYellowDotInfo { id x0; long long x1; } *yellowDotInfo;
@property (nonatomic) BOOL isCPUOptimize;
@property (weak, nonatomic) id<IESLiveKTVCommonOuterService> ktvService;
@property (retain, nonatomic) IESLiveKTVDecorateMidiViewModel *midiDecorateViewModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribedSyncDataWithValue:(id)a0 version:(long long)a1;
- (id)initWithDIContext:(id)a0;
- (id)getTrackContext;
- (BOOL)shouldShowYellowDot;
- (void)selectTagItem:(long long)a0 completion:(id /* block */)a1;
- (void)selectMidiItem:(long long)a0 completion:(id /* block */)a1;
- (void)loadTagList:(id /* block */)a0;
- (void)loadMidiList:(id /* block */)a0;
- (id)getSingerRemoteDressId;
- (BOOL)shouldShowMidiList;
- (struct IESLiveKTVYellowDotInfo { id x0; long long x1; } *)getYellowDotInfo;
- (void)tr_clickTag:(id)a0 result:(id)a1;
- (void)tr_clickMidi:(id)a0 result:(id)a1;
- (void)willStartPlayMusicWithMusicID:(id)a0 afterTime:(long long)a1;
- (void)didClearYellowDot;
- (void)p_updateTagList:(id)a0 avatar:(id)a1;
- (void)p_updateMidiList:(id)a0;
- (void)tr_receiveYellowDot;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
