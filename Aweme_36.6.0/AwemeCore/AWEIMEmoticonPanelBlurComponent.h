@class NSString, UIVisualEffectView;

@interface AWEIMEmoticonPanelBlurComponent : AWEIMComponentBase <AWEIMEmoticonHasBackgroundImageComponent>

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void).cxx_destruct;

@end
