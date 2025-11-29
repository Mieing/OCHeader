@class NSString;

@interface WAPluginCodeSweeperLogic : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hit:(id)a0 version:(unsigned long long)a1;
- (void)sweepPluginAppid:(id)a0;
- (void)sweepSize:(unsigned long long)a0;

@end
