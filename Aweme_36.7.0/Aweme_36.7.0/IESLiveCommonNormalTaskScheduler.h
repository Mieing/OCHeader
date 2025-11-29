@class IESLiveCommonTaskRecorder;

@interface IESLiveCommonNormalTaskScheduler : NSObject

@property (weak, nonatomic) IESLiveCommonTaskRecorder *taskRecorder;

- (void).cxx_destruct;
- (void)runTask:(id)a0;

@end
