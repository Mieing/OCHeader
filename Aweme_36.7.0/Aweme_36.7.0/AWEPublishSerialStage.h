@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishSerialStage : AWEPublishContainerStage

@property (nonatomic) long long runningStageIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (id)stageType;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)startNextStage;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
