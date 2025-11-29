@class NSString;

@interface AWENearbyFeedCardManager : NSObject <AWENearbyFeedCardManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)isEqualNearbyCardTypeBetweenAwemeModel:(id)a0 withAnotherModel:(id)a1;
- (id)createFeedNearbyCardViewControllerWithAwemeModel:(id)a0;
- (void)handleNearbyCardListWithPullType:(long long)a0 response:(id)a1;
- (id)__subManagerWithCardType:(long long)a0;
- (id)transformAwemeModelFromCardModel:(id)a0;
- (id)transformDCardModelFromCardModel:(id)a0 bindAweme:(id)a1 isNativeScene:(BOOL)a2;
- (void)trackRejectCardEventWithCode:(long long)a0 reason:(id)a1 withExtraDict:(id)a2;
- (void)handleLeaveNearbyWithCardUnexposedReason:(long long)a0 videoIndex:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subManagers;
- (id)requestParams;

@end
