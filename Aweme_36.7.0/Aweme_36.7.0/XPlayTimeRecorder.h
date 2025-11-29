@class NSMutableDictionary;

@interface XPlayTimeRecorder : NSObject

@property (retain, nonatomic) NSMutableDictionary *times;

- (void)startRecordTime:(id)a0;
- (long long)endRecordTime:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
