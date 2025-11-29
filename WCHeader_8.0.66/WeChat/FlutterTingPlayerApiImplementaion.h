@class NSString;

@interface FlutterTingPlayerApiImplementaion : NSObject <MusicPlayerApi, MMFlutterPlugin>

@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (id)player;
- (id)getCurrentMusicWithError:(id *)a0;
- (void)playInfo:(id)a0 error:(id *)a1;
- (void)pauseWithError:(id *)a0;
- (void)resumeWithError:(id *)a0;
- (void)stopWithError:(id *)a0;
- (void)seekTimeMs:(id)a0 error:(id *)a1;
- (id)getCurrentPositionWithError:(id *)a0;
- (id)getDurationWithError:(id *)a0;
- (id)getHistoryWithError:(id *)a0;
- (void)clearHistoryWithError:(id *)a0;
- (id)canPlayMusicWithError:(id *)a0;

@end
