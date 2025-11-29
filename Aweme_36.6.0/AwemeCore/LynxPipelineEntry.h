@class NSString, NSDictionary, LynxHostPlatformTiming, NSNumber;

@interface LynxPipelineEntry : LynxPerformanceEntry

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *pipelineStart;
@property (retain, nonatomic) NSNumber *pipelineEnd;
@property (retain, nonatomic) NSNumber *mtsRenderStart;
@property (retain, nonatomic) NSNumber *mtsRenderEnd;
@property (retain, nonatomic) NSNumber *resolveStart;
@property (retain, nonatomic) NSNumber *resolveEnd;
@property (retain, nonatomic) NSNumber *layoutStart;
@property (retain, nonatomic) NSNumber *layoutEnd;
@property (retain, nonatomic) NSNumber *paintingUiOperationExecuteStart;
@property (retain, nonatomic) NSNumber *paintingUiOperationExecuteEnd;
@property (retain, nonatomic) NSNumber *layoutUiOperationExecuteStart;
@property (retain, nonatomic) NSNumber *layoutUiOperationExecuteEnd;
@property (retain, nonatomic) NSNumber *paintEnd;
@property (retain, nonatomic) NSDictionary *frameworkRenderingTiming;
@property (retain, nonatomic) LynxHostPlatformTiming *hostPlatformTiming;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
