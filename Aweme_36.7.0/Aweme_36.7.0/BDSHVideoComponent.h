@class NSString, UIView;
@protocol BDSHVideoProtocol;

@interface BDSHVideoComponent : BDSHViewComponent <BDSHVideoStatusDelegate>

@property (retain, nonatomic) id<BDSHVideoProtocol> videoInstance;
@property (retain, nonatomic) UIView *videoView;
@property (nonatomic) BOOL looping;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL readyForDisplay;
@property (nonatomic) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlay;
- (void)onPause;
- (void)onFirstFrame;
- (void)onEnded;
- (void)onTimeUpdate:(double)a0 totalTime:(double)a1;
- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void)executeFunction:(id)a0 params:(id)a1;
- (id)initWithRenderNode:(void *)a0 engine:(id)a1;
- (void).cxx_destruct;
- (id)contentView;
- (void)dealloc;
- (void)onError:(id)a0;
- (void)onStop;

@end
