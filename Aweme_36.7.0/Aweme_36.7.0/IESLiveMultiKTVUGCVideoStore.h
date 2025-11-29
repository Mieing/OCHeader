@class IESLiveKTVMVInfo, HTSEventContext, IESLiveKtvSongStruct, NSString, IESLiveMultiKTVApi, IESLiveComponentContext, NSNumber;
@protocol IESLiveRoomService, IESLiveMultiKTVUGCVideoDelegate;

@interface IESLiveMultiKTVUGCVideoStore : NSObject <IESLiveMultiKTVUGCVideoRouter, IESLiveUGCVideoSelectPanelDelegate>

@property (weak, nonatomic) IESLiveMultiKTVApi *api;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) IESLiveKTVMVInfo *currentMVInfo;
@property (retain, nonatomic) IESLiveKTVMVInfo *defaultMVInfo;
@property (weak, nonatomic) IESLiveKtvSongStruct *curPlayingSong;
@property (copy, nonatomic) NSString *singerID;
@property (retain, nonatomic) NSNumber *songID;
@property (nonatomic) long long personalMVCount;
@property (nonatomic) long long officialMVCount;
@property (weak, nonatomic) id<IESLiveMultiKTVUGCVideoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateKTVStageState:(unsigned long long)a0;
- (id)getCurrentPlayingMV;
- (id)usedMVCountDictForSinging;
- (id)mvInfoDict;
- (void)playWithMVInfo:(id)a0 completion:(id /* block */)a1;
- (void)handleMessageAndWrdsUpdate:(id)a0;
- (void)getMVListWithParams:(id)a0 completion:(id /* block */)a1;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2 api:(id)a3;
- (void)bindUGCVideoProtocols;
- (void)unbindUGCVideoProtocols;
- (void)updateCurPlayingMusic:(id)a0;
- (void)playSelectedMVWithParams:(id)a0 completion:(id /* block */)a1;
- (id)defaultVid;
- (void)bindUGCVideoObserve;
- (void)changeMVListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)chooseMVListWithParams:(id)a0 completion:(id /* block */)a1;
- (void)getPlayingMVWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
