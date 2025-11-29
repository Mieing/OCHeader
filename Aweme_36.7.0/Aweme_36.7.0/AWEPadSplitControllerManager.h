@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEPadSplitControllerManager : NSObject <AWEPadSplitControllerDIProtocol>

@property (retain, nonatomic) NSMutableDictionary *controllerInstanceDict;
@property (retain, nonatomic) NSMutableArray *controllerInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controllerByProtocol:(id)a0;
- (id)classNameArray;
- (id)controllersByProtocol:(id)a0;
- (void)removeAllControllers;
- (id)protocolKeyByProtocol:(id)a0;
- (void)removeController:(id)a0 forProtocol:(id)a1;
- (void)loadControllersWithService:(id)a0;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (id)init;

@end
