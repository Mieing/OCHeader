@class NSString;

@interface AWEIMMessageEditSelectedComponent : AWEIMFlexComponent <AWEIMMessageEditSelectedProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isVisibleWithMessage:(id)a0 convContext:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)p_createPresenterIfNeeded;
- (void)p_updateProps;
- (id)p_animateConfig;
- (void)p_kvoMessageSelected:(id)a0;
- (BOOL)isInvisible;

@end
