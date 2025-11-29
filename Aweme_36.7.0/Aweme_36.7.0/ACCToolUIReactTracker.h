@class NSString, NSMutableDictionary;

@interface ACCToolUIReactTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *pendingDic;
@property (copy, nonatomic) NSString *latestEventName;
@property (retain, nonatomic) NSMutableDictionary *trackCountDic;

- (void)eventBegin:(id)a0;
- (void)eventBegin:(id)a0 withExcuting:(id /* block */)a1;
- (void)eventEnd:(id)a0 withParams:(id)a1 excuting:(id /* block */)a2;
- (void)startTrackEvent:(id)a0 params:(id)a1;
- (void)eventEnd:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)countEvent:(id)a0;

@end
