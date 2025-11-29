@class NSMutableDictionary, NSMutableString;

@interface AWEUserPerfFinishModel : NSObject

@property (nonatomic) BOOL hasRecordShowInFinish;
@property (retain, nonatomic) NSMutableDictionary *loginFinishKeyEventTimeRecorder;
@property (nonatomic) double startTimeStampForFinish;
@property (nonatomic) double onceLoginRequestStartStamp;
@property (retain, nonatomic) NSMutableString *errorCodeListString;

- (void)generateDefaultValue;
- (void)resetWhenClickLogin:(double)a0;
- (void)addLoginPath:(id)a0 duration:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
