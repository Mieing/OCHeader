@class NSString;

@interface RTVVoipRTMMessageListener : NSObject <RTVVoipRTMMessageListener>

@property (weak, nonatomic) id outListener;
@property (copy, nonatomic) NSString *roomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onReceiveVoipRTMMessage:(id)a0 fromUid:(id)a1;
- (void).cxx_destruct;

@end
