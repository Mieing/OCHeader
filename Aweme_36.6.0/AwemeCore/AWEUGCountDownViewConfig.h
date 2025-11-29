@class NSString, NSDictionary, AWEUGCountDownViewFinishConfig, AWEUGCapsuleModel, AWEUGCountDownViewRunningConfig;
@protocol AWEUGCountDownViewStateDelegate;

@interface AWEUGCountDownViewConfig : NSObject

@property (nonatomic) double totalTimeInterval;
@property (retain, nonatomic) AWEUGCountDownViewRunningConfig *runningConfig;
@property (retain, nonatomic) AWEUGCountDownViewFinishConfig *finishConfig;
@property (retain, nonatomic) AWEUGCapsuleModel *capsuleConfig;
@property (copy, nonatomic) NSString *labelTextColor;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) double hasProgressTime;
@property (nonatomic) unsigned long long viewType;
@property (weak, nonatomic) id<AWEUGCountDownViewStateDelegate> stateDelegate;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) unsigned long long evadeType;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDictionary *logParam;

- (void).cxx_destruct;

@end
