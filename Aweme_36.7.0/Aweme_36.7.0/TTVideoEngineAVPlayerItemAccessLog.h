@class NSArray, NSMutableArray, AVPlayerItemAccessLog;

@interface TTVideoEngineAVPlayerItemAccessLog : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;
@property (readonly, nonatomic) NSArray *events;
@property (retain, nonatomic) AVPlayerItemAccessLog *accessLog;

- (void).cxx_destruct;
- (id)init;
- (void)addEvent:(id)a0;
- (void)clearEvent;

@end
