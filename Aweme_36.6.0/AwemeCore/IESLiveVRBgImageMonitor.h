@class NSMutableDictionary;

@interface IESLiveVRBgImageMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *infos;

- (void)startEnterRoomWithRoomId:(id)a0;
- (void)endEnterRoomWithRoomId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
