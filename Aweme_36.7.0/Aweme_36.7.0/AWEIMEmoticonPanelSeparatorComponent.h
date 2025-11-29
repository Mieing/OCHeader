@class NSString;

@interface AWEIMEmoticonPanelSeparatorComponent : AWEIMComponentBase <AWEIMEmoticonHasBackgroundImageComponent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;

@end
