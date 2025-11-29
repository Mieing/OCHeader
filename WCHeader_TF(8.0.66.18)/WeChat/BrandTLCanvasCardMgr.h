@class MemoryMappedKV, NSString;

@interface BrandTLCanvasCardMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAdCardOpen;
+ (BOOL)isHighFreshOpen;
+ (BOOL)isAdRequestOpen;
+ (BOOL)isAdvanceLaunchJSCoreOpen;
+ (BOOL)isPkgMgrUseDebugAppId;
+ (double)delayTimeForAdvanceLaunchJsEngine;
+ (BOOL)isAdRecConflicCheckABTestClose;

- (BOOL)isPreviewModeOpen;
- (void)onServiceInit;
- (void)handleBizAdNotifyNewXml:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)reportMonitorIdKey:(unsigned int)a0;
- (void).cxx_destruct;

@end
