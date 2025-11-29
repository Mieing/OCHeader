@class MemoryMappedKV, NSString;

@interface MMFinderLiveMinimizeUpdateMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tryUpdateLocalMinimizeLiveInfo:(id)a0 reportScene:(long long)a1;
- (void)tryUpdateLocalMinimizeLiveInfoWithDataItems:(id)a0 reportScene:(long long)a1;
- (void)removeLocalMinimizeLiveInfo:(id)a0;
- (void)updateLocalMinimizeLiveTaskData:(id)a0;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
