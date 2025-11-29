@class NSString, HTSLiveStreamPlayer, IESLiveNewPlayerFactory, UIView;

@interface AWEAwemeLiveViewCellPreloader : NSObject <HTSLiveStreamPlayerDelegate>

@property (retain, nonatomic) HTSLiveStreamPlayer *streamPlayer;
@property (retain, nonatomic) IESLiveNewPlayerFactory *playerFactory;
@property (weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelPreloadPlayerStream;
- (void)tryPreloadPlayerStreamWithRoomModel:(id)a0 containerView:(id)a1;
- (void)clearPreloadPlayer;
- (void)tryPreloadPlayerStreamWithRoomModel:(id)a0 player:(id)a1 containerView:(id)a2;
- (id)streamPlayerGetCurrentRoomModel;
- (void).cxx_destruct;

@end
