@class NSString;

@interface WAJSEventHandler_operateRecentUsageList : WAJSEventHandler_BaseEvent <WAAppItemManagerExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)a0;
- (unsigned long long)operateRecentUsageListWithActionType:(unsigned long long)a0 userName:(id)a1 debugModeType:(unsigned int)a2;
- (unsigned long long)deleteWeAppItem:(id)a0;
- (unsigned long long)starWeAppItem:(id)a0;
- (unsigned long long)unstarWeAppItem:(id)a0;
- (void)onWeAppItemStared:(id)a0 errCode:(int)a1;
- (void)onWeAppItemUnStared:(id)a0 errCode:(int)a1;
- (void)onWeAppItemDeleted:(id)a0;

@end
