@class NSString;

@interface RTVFinishState : NSObject <RTVStateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextStateWithEvent:(id)a0;
- (long long)stateType;

@end
