@class NSString;

@interface WCAddressControlMgr : WCBaseControlMgr <JSEventExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned int)startGetAddressControlLogic:(id)a0;
- (unsigned int)startEditAddressControlLogic:(id)a0;
- (unsigned int)startAddressControlLogic:(id)a0 jsEvent:(id)a1;
- (unsigned int)startEditAddressControlLogic:(id)a0 jsEvent:(id)a1 AuthenticationStruct:(id)a2;
- (unsigned int)startAddressEntranceControlLogic:(id)a0;
- (unsigned int)startAddressEntranceControlLogic:(id)a0 entryScene:(unsigned long long)a1 logicDelegate:(id)a2;
- (unsigned int)startGetLatestAddressControlLogic:(id)a0 jsEvent:(id)a1;
- (void)jsEditAddress:(id)a0;
- (void)jsGetLatestAddresss:(id)a0;

@end
