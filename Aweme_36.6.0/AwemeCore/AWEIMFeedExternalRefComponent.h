@class NSString;

@interface AWEIMFeedExternalRefComponent : AWEIMFlexComponent <AWEIMFeedExternalRefInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)showMediaDetail;
- (BOOL)p_shouldShowPlayIconWithExternalRef:(id)a0;
- (void)didTappedCover;
- (id)presenter;

@end
