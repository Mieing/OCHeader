@class NSString, MinimizeAudioPanelPlayingInfo;
@protocol IMinimizeAudioEventHandlerDelegate;

@interface MinimizeAuduiEventBaseHandler : NSObject <IMinimizeAudioEventHandler>

@property (weak, nonatomic) id<IMinimizeAudioEventHandlerDelegate> delegate;
@property (retain, nonatomic) MinimizeAudioPanelPlayingInfo *playingInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tapeTintColorForPlayingInfo:(id)a0;
+ (id)tapeSourceIconForPlayingInfo:(id)a0;

- (id)initWithPlayingInfo:(id)a0;
- (void)onPlay;
- (void)onPause;
- (void)onStop;
- (void)onOpen;
- (void)onOpenDetail;
- (void)onEnterTaskWithTransitionContext:(id)a0;
- (void)onOpenWithTransitionContext:(id)a0;
- (id)previewView;
- (void)onPlayingInfoChanged;
- (void)onPlayingInfoBizIdReplacedByNewBizId:(id)a0;
- (void).cxx_destruct;

@end
