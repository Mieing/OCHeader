@class MemoryMappedKV, NSString;

@interface BESwitchMgr : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL isSvrOpenTimelineWhenInit;
@property (nonatomic) unsigned int debugConfigOpenTimelineWhenInit;
@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (nonatomic) unsigned int lastRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)resetMappedKv;
- (BOOL)isEnableBrandServiceTimeline;
- (void)tryRequestServiceTimelineConfirmWithScene:(unsigned long long)a0;
- (void)requestServiceTimelineConfirm;
- (void).cxx_destruct;

@end
