@class NSString, NSMutableDictionary;

@interface AWEProfileRedDotManager : NSObject <AWEProfileRedDotManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *adapterDic;
@property (retain, nonatomic) NSMutableDictionary *nodesDic;
@property (retain, nonatomic) NSMutableDictionary *needBindNodesBeforeSetup;
@property (retain, nonatomic) NSMutableDictionary *needBindAdaptersBeforeSetup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)bindShowView:(id)a0 adapterType:(long long)a1;
- (id)nodeForType:(id)a0;
- (void)registerNode:(id)a0 nodeType:(id)a1;
- (void)registerAdapter:(id)a0 adapterType:(long long)a1;
- (void)setupAdapter;
- (void)addRedDotNode:(id)a0 adapterType:(long long)a1;
- (void)bindShowView:(id)a0 nodeType:(id)a1;
- (void)setupRootNode;
- (id)adapterWithType:(long long)a0;
- (void)setupRootRedDotNodeWithType:(long long)a0;
- (void)unregisterNode:(id)a0;
- (void)setupRedDotStruct;
- (void).cxx_destruct;
- (id)init;

@end
