@class NSString, NSMutableDictionary;

@interface WCMomentsContactMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *usernameUpdateTimeDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)contactDisplayNameWithDataItem:(id)a0;
- (id)contactDisplayNameWithComment:(id)a0;
- (id)contactWithUsername:(id)a0;
- (id)_contactDisplayName:(id)a0;
- (void)_updateContact:(id)a0;
- (void)_updateNormalContact:(id)a0;
- (BOOL)_canUpdateNormalContact:(id)a0;
- (void)_updateStrangerContact:(id)a0;
- (void)_updateStrangerContactWithUsername:(id)a0;
- (BOOL)_canUpdateStrangerUsername:(id)a0;
- (BOOL)_isInUpdateInterval:(id)a0 limitDuration:(double)a1;
- (void)onModifyContact:(id)a0;
- (void)onStrangerContactUpdated:(id)a0;
- (void).cxx_destruct;

@end
