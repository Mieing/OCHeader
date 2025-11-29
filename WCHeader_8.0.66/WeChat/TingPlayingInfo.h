@class TingAudioTraceLog, TingItem;

@interface TingPlayingInfo : NSObject

@property (retain, nonatomic) TingAudioTraceLog *traceLog;
@property (retain, nonatomic) TingItem *tingItem;

- (id)initWithTingItem:(id)a0;
- (id)description;
- (double)playedTime;
- (void)clearTraceLog;
- (void).cxx_destruct;

@end
