@interface SLIPerfMetrics : NSObject

@property (nonatomic) double stageCreateViewStart;
@property (nonatomic) double stageCreateViewEnd;
@property (nonatomic) double subphaseLoadTemplateStart;
@property (nonatomic) double subphaseLoadTemplateEnd;
@property (nonatomic) double subphaseCreateRootViewStart;
@property (nonatomic) double subphaseCreateRootViewEnd;
@property (nonatomic) double stageBindDataStart;
@property (nonatomic) double stageBindDataEnd;
@property (nonatomic) double subphaseUpdateModelStart;
@property (nonatomic) double subphaseUpdateModelEnd;
@property (nonatomic) double subphaseUpdateViewStart;
@property (nonatomic) double subphaseUpdateViewEnd;
@property (nonatomic) double subdurationUpdateTextSum;
@property (nonatomic) double subdurationUpdateImageSum;
@property (nonatomic) double stageLayoutStart;
@property (nonatomic) double stageLayoutEnd;
@property (nonatomic) double subdurationLayoutTextSum;

+ (void)initialize;

- (void)clearAllSubdurations;
- (id)exportToDictWithEventType:(long long)a0;

@end
