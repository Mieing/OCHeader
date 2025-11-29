@class MemoryMappedKV, NSString;

@interface BTLFlutterOftenReadMgr : MMUserService <BrandTimelineMsgMgrExt, MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *autoExpiredKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isContactHasMsgInTime:(unsigned int)a0 username:(id)a1;

- (void)onServiceInit;
- (id)getContactData:(id)a0;
- (id)getContactData:(id)a0 checkStayTime:(BOOL)a1;
- (void)resetNewMsgStatusIfNeed:(id)a0;
- (void)resetNewMsgStatusIfNeedWhenOpenUrl:(id)a0 msgSvrId:(unsigned long long)a1;
- (void)onAddBrandTimelineMsg:(id)a0 isHaveNewMsg:(BOOL)a1;
- (void)onAddBrandTimelineMsg:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void).cxx_destruct;

@end
