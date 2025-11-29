@class NSString;
@protocol RxInjector, AWERTVStorage;

@interface RTVUserSettingIMP : NSObject <RTVUserSettingInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<AWERTVStorage> aweStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)callKitPushEnable;
- (BOOL)cellularOptimizeEnable;
- (BOOL)isPersonalRecommendEnable;
- (void).cxx_destruct;

@end
