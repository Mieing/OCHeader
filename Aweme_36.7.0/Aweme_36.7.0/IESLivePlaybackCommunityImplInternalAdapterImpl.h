@class NSString;

@interface IESLivePlaybackCommunityImplInternalAdapterImpl : IESLiveBaseAdapter <IESLivePlaybackCommunityImplInternalAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createFloatButton;
- (id)floatButtonTitleColor;
- (id)liveBackgroundSwitch;
- (void)setDebugPreviewUtilWithView:(id)a0 topAndRightMargin:(double)a1 buttonHeight:(double)a2;
- (void)p_openDebugViewController;

@end
