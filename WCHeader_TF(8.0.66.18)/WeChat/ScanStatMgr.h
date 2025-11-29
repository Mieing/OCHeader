@class NSString;

@interface ScanStatMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) NSString *UUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)statClickEvent:(unsigned int)a0 productId:(id)a1 statId:(id)a2 type:(unsigned int)a3 value:(id)a4 actionListCount:(unsigned int)a5 showType:(unsigned int)a6;
- (BOOL)uploadScanReport:(unsigned int)a0 withLogExt:(id)a1 productId:(id)a2 statId:(id)a3 type:(unsigned int)a4 value:(id)a5 count:(unsigned int)a6 showType:(unsigned int)a7;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
