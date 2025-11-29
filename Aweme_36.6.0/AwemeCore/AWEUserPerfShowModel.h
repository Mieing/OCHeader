@class NSMutableDictionary;

@interface AWEUserPerfShowModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *loginShowKeyEventTimeRecorder;
@property (nonatomic) double lastShowKeyEventTimeStamp;
@property (nonatomic) double startTimeStampForShow;
@property (nonatomic) double totalShowDuration;
@property (nonatomic) BOOL hasStartShow;

- (void)generateDefaultValue;
- (void).cxx_destruct;
- (id)init;

@end
