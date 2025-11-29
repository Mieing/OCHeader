@class HTSLiveStreamPlayer, NSString;
@protocol IESLiveRoomService, IESLiveMTScreenCastService;

@interface IESLiveInnerPlayerStreamPreloader : NSObject <HTSLiveStreamPlayerDelegate>

@property (retain, nonatomic) HTSLiveStreamPlayer *streamPlayer;
@property (retain, nonatomic) id<IESLiveMTScreenCastService> screenCastService;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) id /* block */ stopLoadingCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelPreloadPlayerStream;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)clearPreloadPlayer;
- (id)streamPlayerGetCurrentRoomModel;
- (void)tryPreloadPlayerStreamWithRoomModel:(id)a0 containerView:(id)a1 diContext:(id)a2;
- (void)cancelProbePlayerStream:(BOOL)a0;
- (void)tryProbePlayerStreamWithRoomModel:(id)a0 containerView:(id)a1 diContext:(id)a2;
- (BOOL)doPreloadPlayerStreamWithRoomModel:(id)a0 containerView:(id)a1 type:(long long)a2 diContext:(id)a3;
- (void).cxx_destruct;

@end
