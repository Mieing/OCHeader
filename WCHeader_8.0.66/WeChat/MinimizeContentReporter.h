@class NSString;

@interface MinimizeContentReporter : NSObject

@property (retain, nonatomic) NSString *taskIdList;
@property (nonatomic) unsigned long long expandStartTime;
@property (nonatomic) unsigned long long listExpandTime;
@property (nonatomic) long long stickEdge;
@property (nonatomic) long long type;
@property (nonatomic) long long action;

+ (void)reportOperate:(long long)a0 onTask:(id)a1 taskCount:(long long)a2;
+ (void)reportAddMinimizeTask:(id)a0 taskCount:(long long)a1;
+ (id /* block */)contentMinimizeActionSheetReport:(long long)a0;
+ (void)directReportcontentMinimizeActionSheetView:(id)a0 scene:(long long)a1 event:(long long)a2 btnRow:(unsigned long long)a3 btnIdex:(unsigned long long)a4;
+ (id /* block */)starMinimizeActionSheetReport:(long long)a0;

- (void)updateWithTaskList:(id)a0;
- (void)onTaskListExpand;
- (void)reportFloatListAction:(long long)a0 result:(long long)a1;
- (void).cxx_destruct;

@end
