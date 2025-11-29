@interface MinimizeReportUtil : NSObject

+ (id)genSessionId;
+ (id)genAggreSessionId;
+ (void)reportNewTask:(id)a0;
+ (void)reportExitTaskListPage:(id)a0;
+ (void)reportOpTask:(id)a0;
+ (void)reportMoveContainer:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 aggreSessionId:(id)a2 arrTaskSessionId:(id)a3;
+ (id)moveContainerPositionDescFromPoint:(struct CGPoint { double x0; double x1; })a0;

@end
