@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface WALaunchTimeAxisMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *instanceId2Nodes;
@property (nonatomic) BOOL allowKV;
@property (retain, nonatomic) NSObject<OS_os_log> *osLog;
@property (nonatomic) unsigned long long signpostId;
@property (retain, nonatomic) NSObject<OS_os_log> *osLogGlobal;
@property (nonatomic) unsigned long long signpostIdGlobal;
@property (retain, nonatomic) NSObject<OS_os_log> *osLogWebView;
@property (nonatomic) unsigned long long signpostIdWebView;
@property (retain, nonatomic) NSObject<OS_os_log> *osLogService;
@property (nonatomic) unsigned long long signpostIdService;
@property (retain, nonatomic) NSObject<OS_os_log> *osLogNative;
@property (nonatomic) unsigned long long signpostIdNative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)markLaunchTimeAxisEvent:(id)a0;
- (void)markLaunchTimeAxisEventWithAppid:(id)a0 parent:(id)a1 children:(id)a2 inCategory:(unsigned long long)a3 eventType:(unsigned long long)a4 option:(unsigned int)a5 timeStamp:(unsigned long long)a6;
- (void).cxx_destruct;

@end
