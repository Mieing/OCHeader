@class NSString;

@interface MagicAdvertiseBaseService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getSpecificSlotMsg:(id)a0 withBizName:(id)a1;
- (id)getSpecificSlotMsgAndWrap:(id)a0 withBizName:(id)a1;
- (BOOL)clearSpecificSlotMsg:(id)a0 withBizName:(id)a1;

@end
