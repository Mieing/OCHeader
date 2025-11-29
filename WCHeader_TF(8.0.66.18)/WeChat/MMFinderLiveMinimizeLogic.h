@class NSString;

@interface MMFinderLiveMinimizeLogic : MinimizeTaskBaseLogicController <IMinimizeTaskDelegateInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateRecentUserdRecordWithLiveTask:(id)a0;
+ (void)updateRecentUserdRecordWithDataItem:(id)a0;
+ (id)generateTaskDataWithDataItem:(id)a0;
+ (void)enterMMFinderLiveWithDataItems:(id)a0 selectIndex:(id)a1;
+ (id)getDataItemFromTaskData:(id)a0;

- (void)onEnterRecentUsedTask:(id)a0;
- (void)onOutContentTask:(id)a0 replacedByAnotherTaskData:(id)a1;

@end
