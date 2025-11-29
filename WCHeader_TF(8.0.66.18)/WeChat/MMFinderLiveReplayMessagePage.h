@class NSString, NSMutableArray;

@interface MMFinderLiveReplayMessagePage : NSObject

@property (nonatomic) unsigned int timeOffset;
@property (nonatomic) unsigned int timespan;
@property (retain, nonatomic) NSMutableArray *frames;
@property (retain, nonatomic) MMFinderLiveReplayMessagePage *nextLessRecentlyUsedPage;
@property (weak, nonatomic) MMFinderLiveReplayMessagePage *nextMoreRecentlyUsedPage;
@property (copy, nonatomic) NSString *liveDesc;

- (id)initWithTimeOffset:(unsigned int)a0 messageResponse:(id)a1 liveTaskId:(id)a2 initialLiveMicInfo:(id)a3 initialLiveRoomImages:(id)a4;
- (id)frameAtTimeOffset:(unsigned int)a0 combinePreviousFramesInPage:(BOOL)a1;
- (void)populateFramesWithTimeOffset:(unsigned int)a0 timespan:(unsigned int)a1 frameItems:(id)a2 liveTaskId:(id)a3 initialLiveMicInfo:(id)a4 initialLiveRoomImages:(id)a5;
- (void).cxx_destruct;

@end
