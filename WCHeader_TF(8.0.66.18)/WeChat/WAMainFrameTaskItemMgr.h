@class NSString;

@interface WAMainFrameTaskItemMgr : MMUserService <WAAppItemManagerExtension, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)a0;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)a0 ignoreUsername:(id)a1 debugMode:(unsigned int)a2;
- (id)getSiderbarItemListWithLimit:(unsigned int)a0 ignoreUsername:(id)a1 debugMode:(unsigned int)a2;
- (BOOL)updateMainFrameTaskItemWithUserName:(id)a0 debugMode:(unsigned int)a1;
- (BOOL)deleteMainFrameTaskItemWithUserName:(id)a0 debugMode:(unsigned int)a1 needNotify:(BOOL)a2;
- (BOOL)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)a0;
- (void)notifyMainFrameTaskItemUpdated;
- (void)onWeAppItemDeleted:(id)a0;

@end
