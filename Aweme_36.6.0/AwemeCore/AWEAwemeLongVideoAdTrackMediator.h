@interface AWEAwemeLongVideoAdTrackMediator : NSObject

@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hasOver;
@property (nonatomic) BOOL shouldIgnoreShortOver;
@property (nonatomic) BOOL shouldLongVideoReplay;

+ (id)sharedInstance;

- (void)adShortVideoReplayTrackWith:(id)a0 eventName:(id)a1;
- (void)adShortVideoPlayTrackWith:(id)a0;
- (BOOL)isValidModel:(id)a0;
- (id)getAdShortVideoTrackTimeKeyWith:(id)a0;
- (void)adShortVideoBreakTrackWith:(id)a0 extra:(id)a1;
- (id)getAdLongVideoTrackTimeKeyWith:(id)a0;
- (BOOL)_isValidModel:(id)a0;
- (void)adShortVideoBreakTrackWith:(id)a0 extra:(id)a1 isSlid:(BOOL)a2;
- (void)adShortVideoOverTrackWith:(id)a0;
- (void)adShortVideoPauseTrackWith:(id)a0;
- (void)adShortVideoResumeTrackWith:(id)a0;

@end
