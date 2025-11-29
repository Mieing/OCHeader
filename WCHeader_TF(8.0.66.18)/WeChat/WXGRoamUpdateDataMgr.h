@class NSString;

@interface WXGRoamUpdateDataMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;

@end
