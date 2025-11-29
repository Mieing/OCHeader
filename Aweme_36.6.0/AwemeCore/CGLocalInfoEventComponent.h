@class NSString;

@interface CGLocalInfoEventComponent : CGObject <CGLocalInfoEventComponentProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)sendCustomMessage:(id)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)_handleLocalInfoTransmit:(id)a0;
- (void)_callbackCustomMessageReceivedWithCode:(int)a0 uniqueSeq:(id)a1 message:(id)a2;
- (void)_handleGameExitInstruction;
- (void)_handleGameShareInstruction;
- (void)_handleGameCustomInstruction:(id)a0;
- (void)_completeGameExit:(long long)a0 message:(id)a1;
- (void)_completeGameShare:(long long)a0 message:(id)a1;
- (void)_completeCustomEventResult:(long long)a0 message:(id)a1;

@end
