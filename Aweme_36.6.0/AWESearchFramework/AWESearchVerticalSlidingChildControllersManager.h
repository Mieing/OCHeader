@class NSMutableArray;

@interface AWESearchVerticalSlidingChildControllersManager : NSObject

@property (retain, nonatomic) NSMutableArray *viewControllersArray;

- (id)controllerAtIndex:(long long)a0;
- (void)addViewController:(id)a0;
- (long long)numberOfViewcontrollers;
- (void)removeControllerAtIndex:(long long)a0;
- (void)replaceCiewController:(id)a0 atIndex:(long long)a1;
- (void)removeAllViewControllers;
- (void)removeSubviewControllerFromIndex:(long long)a0;
- (void).cxx_destruct;

@end
