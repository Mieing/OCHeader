@class NSString, UIImageView, UIVisualEffectView, IESLiveBackgroundStrategyFactory;
@protocol IESLiveRoomService, HTSLiveMediaStreamEngineDelegate, IESLivePlayerProtocol;

@interface HTSLiveExternalStreamEngine : NSObject <IESLivePlayerControllerDelegate, HTSLiveMediaStreamEngine>

@property (retain, nonatomic) id<IESLivePlayerProtocol> playerController;
@property (weak, nonatomic) UIImageView *backgroundView;
@property (weak, nonatomic) UIVisualEffectView *bgEffectview;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) IESLiveBackgroundStrategyFactory *bgStategyFactory;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hideLiveRecordLoadingView;
@property (readonly, nonatomic) long long engineState;
@property (weak, nonatomic) id<HTSLiveMediaStreamEngineDelegate> delegate;

- (void)player:(id)a0 playbackStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 mediaSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)startLiveStreamIfNeeded;
- (void)stopLiveStream;
- (void)applyBlurMaskToView:(id)a0;
- (void)applyEffectBackgroundBehindPlayerView;
- (void)loadLivePlayer;
- (void)refreshBackgroundForImgView:(id)a0 andEffectView:(id)a1;
- (BOOL)shouldMoveUpPlayerView;
- (void)changePlayerContentType;
- (void)changePlayerContentFrame;
- (id)previewView;
- (void).cxx_destruct;
- (id)createBackgroundView;

@end
