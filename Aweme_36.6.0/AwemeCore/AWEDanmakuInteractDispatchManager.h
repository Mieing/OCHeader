@class AWEDanmakuPageContext, NSMutableDictionary, NSString, NSMutableArray;

@interface AWEDanmakuInteractDispatchManager : NSObject <AWEDanmakuItemLifeCycleProtocol, AWEDanmakuPlayerStatusCycleProtocol, AWEDanmakuContainerLifeCycleProtocol, AWEDanmakuModuleDIProtocol>

@property (retain, nonatomic) NSMutableDictionary *cacheDict;
@property (retain, nonatomic) NSMutableArray *moduleArray;
@property (retain, nonatomic) NSMutableDictionary *protocolModuleMapDic;
@property (retain, nonatomic) AWEDanmakuPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (id)danmakuModuleByProtocol:(id)a0;
- (void)loadControllersWithContext:(id)a0;
- (id)moduleArrayBySelector:(SEL)a0;
- (id)danmakuModulesByProtocol:(id)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)addModule:(id)a0;

@end
