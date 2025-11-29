@class NSString;

@interface AWEYAPLifeCycleDispatcher : NSObject <HTSAppLifeCycle>

@property (copy, nonatomic) id /* block */ nextActiveBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void).cxx_destruct;

@end
