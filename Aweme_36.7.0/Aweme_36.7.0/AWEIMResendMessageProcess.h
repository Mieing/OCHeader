@class NSString;

@interface AWEIMResendMessageProcess : AWEIMProcess <AWEIMStageStatusHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stageDidStart:(id)a0;
- (void)stageDidFinish:(id)a0;
- (unsigned long long)p_getStageNumberWithStage:(id)a0;

@end
