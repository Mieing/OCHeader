@class NSString;

@interface ACCRecordCaptureTrackerManager : NSObject

@property (copy, nonatomic) NSString *piemInteractionId;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *recordType;
@property (nonatomic) double captureStartDuration;
@property (nonatomic) double clickToCallVEDuration;
@property (nonatomic) double completeVECallbackDuration;
@property (nonatomic) double durMainPath;
@property (nonatomic) double durClickToCallVE;
@property (nonatomic) double durVECallBack;
@property (nonatomic) BOOL isTrackerStartActionStatus;

+ (id)shareInstance;

- (void).cxx_destruct;
- (void)reset;

@end
