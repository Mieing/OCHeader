@class MemoryMappedKV, NSString;

@interface MMWebDebugPkgMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dicCmmonAppId2Desc;
+ (id)arrCommonDebugPkgDescItem;
+ (id)arrSessionCommonDebugPkgDescItem;
+ (BOOL)isDebugPkgABtestOpen;

- (BOOL)isDebugPkgManualSwitchOpen;
- (void)setDebugPkgManualSwitchOpen:(BOOL)a0;
- (BOOL)setDebugPkgWithPath:(id)a0 appId:(id)a1 errMsg:(id *)a2;
- (BOOL)setDebugPkgWithData:(id)a0 appId:(id)a1;
- (id)getCanvasDebugPath:(id)a0;
- (id)getDebugPkgWithAppId:(id)a0 errMsg:(id *)a1;
- (id)getCanvasBaseDebugPkgWithAppId:(id)a0 errMsg:(id *)a1;
- (id)getCanvasBizDebugPkgWithAppId:(id)a0 errMsg:(id *)a1;
- (BOOL)clearDebugPkgInfo:(id)a0;
- (void)clearAllDebugPkgInfo;
- (id)__pkgDirPath;
- (id)__pkgFilePathForAppId:(id)a0;
- (void).cxx_destruct;

@end
