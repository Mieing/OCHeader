@class ACCCameraSubscription, ACCThreadSafeArray, NSString;

@interface ACCAIEditConflictManager : NSObject <ACCAIEditConflictManagerProtocol>

@property (retain, nonatomic) ACCThreadSafeArray *nodes;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)pushNodeIfNotTopNode:(unsigned long long)a0 scene:(unsigned long long)a1 project:(id)a2;
+ (void)popNodeWithScene:(unsigned long long)a0 project:(id)a1;

- (void)addSubscription:(id)a0;
- (id)pushNode:(unsigned long long)a0 scene:(unsigned long long)a1;
- (id)pushNodeIfNotTopNode:(unsigned long long)a0 scene:(unsigned long long)a1;
- (id)popNodeWithScene:(unsigned long long)a0;
- (id)topNode;
- (id)getNodeWithUUID:(id)a0;
- (BOOL)hasConflictNode;
- (void)popAllConflictNode;
- (BOOL)shouldDisableWithScene:(unsigned long long)a0;
- (id)reasonWithScene:(unsigned long long)a0;
- (void)resetNodeList:(id)a0;
- (id)disableTipMessageWithScene:(unsigned long long)a0 otherScene:(unsigned long long)a1;
- (void)notifyClearAllNodes;
- (id)funcNameWithScene:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)popNode;
- (void)notifyNodesChanged;
- (id)nodeList;

@end
