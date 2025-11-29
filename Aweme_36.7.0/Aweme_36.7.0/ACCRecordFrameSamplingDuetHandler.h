@interface ACCRecordFrameSamplingDuetHandler : ACCRecordFrameSamplingBaseHandler

- (BOOL)shouldHandle:(id)a0;
- (id)preprocessFrame:(id)a0;
- (void)samplingCompleted;

@end
