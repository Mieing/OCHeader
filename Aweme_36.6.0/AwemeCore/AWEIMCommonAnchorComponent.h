@class NSString;

@interface AWEIMCommonAnchorComponent : AWEIMFlexComponent <IESIMFeedMessageAnchorViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)handleTapWithAnchorView:(id)a0;
- (void)updateHeightWithAnchorView:(id)a0;

@end
