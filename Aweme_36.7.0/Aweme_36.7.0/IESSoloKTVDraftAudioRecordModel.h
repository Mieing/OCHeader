@class NSMutableArray;

@interface IESSoloKTVDraftAudioRecordModel : NSObject

@property (nonatomic) double delay;
@property (retain, nonatomic) NSMutableArray *audioPaths;

- (id)cutAudioRecordWithMaxEndTime:(double)a0 startTime:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
