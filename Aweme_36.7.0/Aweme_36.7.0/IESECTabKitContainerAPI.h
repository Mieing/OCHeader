@class IESECTabKitRouterParameters;

@interface IESECTabKitContainerAPI : NSObject {
    IESECTabKitRouterParameters *_parameters;
}

- (void)fetchTabsWithLoadingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;

@end
