@class RTVFeedTracker, NSString;
@protocol RxInjector, RTVVoipStorageAreaInterface;

@interface AWERTVStorageIMP : NSObject <AWERTVStorage>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipStorageAreaInterface> storage;
@property (readonly, nonatomic) RTVFeedTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)PIPSwitchIsOn;
- (void)setPIPSwitch:(BOOL)a0 enterFrom:(id)a1;
- (void)setCellularOptimizeEnable:(BOOL)a0;
- (BOOL)cellularOptimizeEnable;
- (void)__log:(id)a0;
- (id)cellularOptimizeKey;
- (void).cxx_destruct;

@end
