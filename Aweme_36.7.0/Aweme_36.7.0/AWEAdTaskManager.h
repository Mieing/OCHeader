@class NSString;

@interface AWEAdTaskManager : HTSService <AWEAdTaskManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)runTasks:(id)a0 withContext:(id /* block */)a1;
+ (long long)runTypeTasks:(id)a0 withContext:(id /* block */)a1;
+ (void)asyncRunTasks:(id)a0 withRawContext:(id)a1;
+ (void)runBlockTasks:(id)a0 withContext:(id /* block */)a1;
+ (BOOL)runTasks:(id)a0 withRawContext:(id)a1;
+ (void)asyncRunTasks:(id)a0 withContext:(id /* block */)a1;
+ (Class)taskClassWithType:(long long)a0;
+ (BOOL)runTasks:(id)a0;


@end
