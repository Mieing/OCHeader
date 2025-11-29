@class NSMutableDictionary;

@interface IESSoloKTVDraftMidiRecordModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *midis;
@property (nonatomic) double fps;
@property (nonatomic) double recordDelayTime;

- (void)addScoreModel:(id)a0;
- (id)getScoreModel:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
