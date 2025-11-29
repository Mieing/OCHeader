@class NSString, NSDictionary, NSMutableOrderedSet, NSMutableArray;

@interface IESLiveEnterRoom0vvDataCollector : NSObject <IESLiveEnterRoom0vvDataCollectorInterface>

@property (retain, nonatomic) NSMutableArray *noStreamInfo;
@property (retain, nonatomic) NSMutableOrderedSet *consumePreStreamRoomIDSet;
@property (retain, nonatomic) NSMutableArray *consumeLiveRoomDurationInfo;
@property (nonatomic) double lastVideo0vvTimeInterval;
@property (copy, nonatomic) NSDictionary *fastScrollConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)collectConsumePreStream:(id)a0;
- (void)collectNoStreamInfo;
- (void)resetNoStreamInfo;
- (long long)getStreamPredictType;
- (long long)get0vvPredictType;
- (long long)hasConsumePreStreamCount;
- (void)collectConsumeLiveRoom:(id)a0 duration:(id)a1;
- (void)resetLiveRoomConsumeInfo;
- (BOOL)innerFeedFastScroll;
- (void)p_handleVideo0vvNotify:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
