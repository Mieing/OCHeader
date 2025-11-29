@class NSString;

@interface AWEPublishToNearbyPrivacyManager : UIView <AWEPublishToNearbyPrivacyManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__uid;
- (id)cacheForPublishToNearbyPrivacyType;
- (unsigned long long)nearbyPrivacyDefaultValue;
- (unsigned long long)nearbyPublishPrivacyYellowPointType;
- (unsigned long long)nearbyPrivacyStyle;
- (void)setPublishToNearbyPrivacyTypeCache:(unsigned long long)a0;
- (unsigned long long)defaultTypeWithIsPublicVideo:(BOOL)a0 publishToNearbyPrivacyType:(id)a1;
- (BOOL)shouldShowPublicPrivacyYellowPointOuter;
- (BOOL)shouldShowPublicPrivacyYellowPointInner;
- (BOOL)shouldShowPublicPrivacyBubbleInner;
- (void)setHasShowPublicPrivacyYellowPointOuter:(BOOL)a0;
- (void)setHasShowPublicPrivacyYellowPointInner:(BOOL)a0;
- (void)setHasShowPublicPrivacyBubbleInner:(BOOL)a0;
- (id)publishToNearbyPrivacyHighlightColor;
- (id)publishToNearbyPrivacyNormalColor;

@end
