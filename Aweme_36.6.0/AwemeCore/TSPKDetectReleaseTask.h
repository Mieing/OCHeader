@interface TSPKDetectReleaseTask : TSPKDetectTask

@property (nonatomic) BOOL ignoreSameReport;

- (void)executeWithInstanceAddress:(id)a0;
- (void)handleDetectResult:(id)a0 detectTimeStamp:(double)a1 store:(id)a2 info:(id)a3;
- (id)checkIfRecordingStopped:(id)a0 atTimeStamp:(double)a1;
- (void)execute;
- (void)setup;

@end
