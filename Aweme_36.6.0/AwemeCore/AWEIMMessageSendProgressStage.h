@protocol AWEIMMessageSendProgressStageDelegate;

@interface AWEIMMessageSendProgressStage : NSObject

@property (nonatomic) double weight;
@property (nonatomic) double progress;
@property (weak, nonatomic) id<AWEIMMessageSendProgressStageDelegate> delegate;

- (id)initWithWeight:(double)a0;
- (double)weightProcess;
- (void).cxx_destruct;

@end
