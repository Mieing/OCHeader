@class NSString, MMMusicInfo, WCCanvasComponentItem, WCStatTimerHelper;

@interface WCCanvasMusicPlayInfo : MMObject

@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (nonatomic) long long playState;
@property (nonatomic) double defaultDuration;
@property (nonatomic) double duration;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) WCCanvasComponentItem *musicComponentItem;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) unsigned int playCompletedCount;
@property (nonatomic) unsigned long long playedTime;
@property (nonatomic) unsigned int maxPlayTime;
@property (retain, nonatomic) WCStatTimerHelper *playTimeHelper;

- (id)init;
- (double)fetchDuration;
- (BOOL)isPlaying;
- (void).cxx_destruct;

@end
