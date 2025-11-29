@interface ACCRecordBackbuttonHelper : NSObject

+ (BOOL)enableWithPublishModel:(id)a0;
+ (void)switchLastVideoMode:(id)a0 publishModel:(id)a1 switchModeService:(id)a2 tabName:(id)a3;
+ (id)recordModeAllowList;
+ (void)recordMode:(id)a0 switchModeService:(id)a1 publishModel:(id)a2;
+ (long long)currentModeIndexWithModel:(id)a0 switchModeService:(id)a1 enalbeIndex:(BOOL *)a2;

@end
