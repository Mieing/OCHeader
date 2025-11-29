@class NSNumber, NSMutableArray, NSMutableDictionary;

@interface IESLLGDConfirmPreRequestTimelineRecorder : NSObject

@property (retain, nonatomic) NSMutableArray *timelineRecords;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (nonatomic) BOOL forbiddenEnableRecorder;
@property (copy, nonatomic) NSNumber *pageOpenTime;

+ (id)sharedInstance;

- (void)recordTimeline:(id)a0;
- (void)recordTrackParams:(id)a0;
- (void)reportAllTimelines;
- (void).cxx_destruct;
- (id)init;
- (void)clearAllRecords;

@end
