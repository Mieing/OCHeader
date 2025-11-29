@class TPThumbPlayerConnectionMgrWrapper, NSString;

@interface TPConnectionMgr : NSObject <ITPConnectionMgr>

@property (retain, nonatomic) TPThumbPlayerConnectionMgrWrapper *connectionMgrWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (int)activeAllConnections;
- (int)activeConnection:(int)a0;
- (int)addConnectionWithPlayer1:(id)a0 actions1:(id)a1 player2:(id)a2 actions2:(id)a3;
- (void)deactiveAllConnections;
- (void)deactiveConnection:(int)a0;
- (void)removeConnection:(int)a0;
- (void).cxx_destruct;

@end
