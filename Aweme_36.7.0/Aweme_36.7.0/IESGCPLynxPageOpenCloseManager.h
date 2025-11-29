@class BDXBridgeEventSubscriber, NSMutableDictionary;

@interface IESGCPLynxPageOpenCloseManager : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *openCloseSubscriber;
@property (retain, nonatomic) NSMutableDictionary *pagesInfo;

+ (id)manager;

- (void)unregisterOpenCloseEventSubscriber;
- (void)registerOpenCloseEventSubscriber;
- (BOOL)isPageOpen:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
