@class NSString;

@interface AWEIMMixImageAnchorComponent : AWEIMFlexComponent <AWEIMMediaContentAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)didFinishSetImage:(id)a0 ofMessage:(id)a1;
- (void)p_anchorViewDidTapped;
- (void)p_updatePropsWithMessage;
- (void)p_showMediaDetail;

@end
