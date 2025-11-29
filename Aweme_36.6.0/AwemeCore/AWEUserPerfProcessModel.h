@class NSMutableDictionary, NSMutableString;

@interface AWEUserPerfProcessModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *loginProcessKeyEventTimeRecorder;
@property (nonatomic) double lastProcessKeyEventTimeStamp;
@property (nonatomic) double startTimeStampForProcess;
@property (nonatomic) double totalProcessDuration;
@property (retain, nonatomic) NSMutableString *errorCodeListString;
@property (nonatomic) BOOL hasStartProcess;

- (void)generateDefaultValue;
- (void).cxx_destruct;
- (id)init;

@end
