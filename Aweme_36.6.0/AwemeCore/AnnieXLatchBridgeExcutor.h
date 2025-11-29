@class NSString;

@interface AnnieXLatchBridgeExcutor : NSObject <IESLatchLynxBridgeExcutorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)excuteLatchLynxMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)excuteLatchLynxMethodSetShellWithMessage:(id)a0 callback:(id /* block */)a1;

@end
