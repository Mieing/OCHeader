@class NSString;

@interface CommonReddotSyncManagerCpp : UnitRCObjcBaseProxyClass <CommonReddotSyncManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)initService:(id)a0;
- (void)removeService:(unsigned int)a0;
- (void)onNotifyReceived:(unsigned long long)a0 recvData:(id)a1;
- (void)onActionNotify:(unsigned long long)a0 bizType:(unsigned long long)a1 recvData:(id)a2;
- (void)onAppForeground;
- (void)onReddotChanged:(id)a0;
- (void)onReddotReplaced:(unsigned int)a0;
- (void)onEnterBiz:(unsigned int)a0;
- (void)doSync:(unsigned int)a0 syncScene:(int)a1;
- (void)sync:(unsigned int)a0 request:(id)a1;
- (void)addReddotPathListener:(id)a0 listener:(id)a1;
- (void)removeReddotPathListener:(id)a0 listener:(id)a1;
- (void)addReddotListener:(id)a0;
- (void)removeReddotListener:(id)a0;

@end
