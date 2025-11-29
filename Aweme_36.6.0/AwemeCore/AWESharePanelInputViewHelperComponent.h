@class NSString, UIView;

@interface AWESharePanelInputViewHelperComponent : AWEIMComponentBase <AWESharePanelComponentViewProtocol, AWESharePanelInputViewHelperInterface>

@property (retain, nonatomic) UIView *helperView;
@property (nonatomic) double currentHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (double)componentHeight;
- (double)currentHelperViewHeight;
- (void)setHelperViewHeight:(double)a0;
- (void).cxx_destruct;
- (id)componentView;

@end
