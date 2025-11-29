@class RTVFeedTracker, NSString;
@protocol RTVUserProfileManagerInterface, RTVMultipleDelegateInterface, RxInjector, RTVFollowControllerObserver;

@interface __RTVFollowController : NSObject <RTVFollowControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVFeedTracker *tracker;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVFollowControllerObserver> observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)__aweUserWithRTVUserProfile:(id)a0;
- (long long)__rtvRelationStatusFromAWEFollowStatus:(long long)a0;
- (id)followUser:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
