@class NSArray, BDARVPlayerContext, NSString, NSDictionary;
@protocol BDARVPlayerState;

@interface BDARVPlayerTrackerNew : NSObject

@property (retain, nonatomic) BDARVPlayerContext *context;
@property (nonatomic) long long replayCount;
@property (nonatomic) double effectivePlayTime;
@property (retain, nonatomic) NSArray *playTrackUrls;
@property (retain, nonatomic) NSArray *effectivePlayTrackUrls;
@property (retain, nonatomic) NSArray *playOverTrackUrls;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *adExtra;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL isSendAutoPlay;
@property (weak, nonatomic) id<BDARVPlayerState> dataSource;

- (void)sendReplayTrack:(id)a0;
- (void)sendEndTrack;
- (void)sendEndTrackURL;
- (void)sendFailTrack;
- (void)handlePlayEvent;
- (void)sendContinueTrack;
- (void)sendPauseTrack;
- (void)sendEventdWithlabel:(id)a0;
- (void)sendTrackURLWithLabel:(id)a0 trackURLList:(id)a1;
- (id)ttv_dictWithEvent:(id)a0 label:(id)a1;
- (void).cxx_destruct;
- (void)updateContext:(id /* block */)a0;

@end
