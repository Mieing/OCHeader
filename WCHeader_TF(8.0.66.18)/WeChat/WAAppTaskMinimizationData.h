@class NSString;

@interface WAAppTaskMinimizationData : MMObject <MinimizeTaskPlayCtrlDelegate, PBCoding>

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned long long debugMode;
@property (nonatomic) BOOL isGameAPP;
@property (copy, nonatomic) NSString *appEntryPage;
@property (copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_debugMode;
+ (void)PBArrayAdd_isGameAPP;
+ (void)PBArrayAdd_appEntryPage;
+ (void)PBArrayAdd_appID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)onContentViewClicked:(id)a0;
- (void)onCloseButtonClicked:(id)a0;
- (void)removeWindowMinimizeTask;
- (void).cxx_destruct;

@end
