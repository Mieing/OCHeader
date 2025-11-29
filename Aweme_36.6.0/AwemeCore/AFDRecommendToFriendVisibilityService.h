@class NSString;

@interface AFDRecommendToFriendVisibilityService : NSObject <AFDRecommendToFriendVisibilityServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getRecommendVisibleType;
+ (void)setRecommendVisibleType:(long long)a0 completion:(id /* block */)a1;
+ (void)presentRecommendVisibleSwitchPanelWithNeedDoubleCheckAlert:(BOOL)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (BOOL)enableRecommendVisibilitySwitch;


@end
