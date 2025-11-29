@class NSMapTable;

@interface IESECFeedPlayerCoordinator : NSObject {
    NSMapTable *_viewControllerMap;
}

+ (id)sharedCoordinator;

- (void)registerViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
