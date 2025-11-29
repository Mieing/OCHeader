@class NSString;

@interface IESIMUserRecommendKitService : HTSService <IESIMUserRecommendKitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFriend:(id)a0 scene:(id)a1;
- (id)possibleFriendTextWithScene:(long long)a0;
- (void)preloadFansNoticeRecommendIfNeeded;
- (void)preloadInteractNoticeRecommendIfNeeded;
- (BOOL)isUserRecommendError:(id)a0;
- (BOOL)isRequestOnAirError:(id)a0;
- (void)AWEURStorageSetObject:(id)a0 forLoginUser:(id)a1;
- (id)AWEURStorageGetObjectForLoginUser:(id)a0;

@end
