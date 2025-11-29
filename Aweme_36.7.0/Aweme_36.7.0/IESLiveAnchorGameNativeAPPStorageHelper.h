@class NSString;

@interface IESLiveAnchorGameNativeAPPStorageHelper : NSObject <IESLiveAnchorGameNativeAPPStorageHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)checkYellowPointNeeded;
- (void)setYellowPointShowed;
- (BOOL)checkNativeAppCoexistGuideImageShowed;
- (void)setNativeAppCoexistGuideImageShowed;
- (void)cacheOperation:(id)a0 times:(long long)a1;
- (long long)getOperationTimes:(id)a0;
- (long long)getLastBeforeLiveMountType;
- (void)setLastBeforeLiveMountType:(long long)a0;
- (BOOL)canShowTimorToolbarItemRedDot;
- (BOOL)canShowTimorToolbarItemRedDotForCount;
- (void)increaseTimorToolbarItemRedDotShownTime:(BOOL)a0;
- (id)getNativeAppYellowPointShowedKey;
- (id)p_lastBeforeLiveMountTypeKey;
- (id)getNativeAppGuideImageCacheKey;

@end
