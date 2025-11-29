@class NSString, AWEPublishExceptionTaskContext, AWEVideoPublishViewModel;

@interface AWEPublishExceptionTaskChecker : NSObject <AWEPublishExceptionCheckerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishExceptionTaskContext *taskContext;
@property (retain, nonatomic) NSString *exceptionMsg;
@property (nonatomic) double stopDuration;
@property (nonatomic) long long checkType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
