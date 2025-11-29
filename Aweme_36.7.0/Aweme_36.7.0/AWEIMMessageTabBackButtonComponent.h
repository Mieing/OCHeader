@class NSString, IESIMButton;

@interface AWEIMMessageTabBackButtonComponent : AWEIMComponentBase <AWEIMMessageTabNaviButtonProvider>

@property (retain, nonatomic) IESIMButton *backButtonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (long long)buttonPosition;
- (BOOL)canShowInNaviBar;
- (id)customNaviButtonView;
- (unsigned long long)p_closeButtonStyle;
- (void)p_didClickBackButton;
- (void).cxx_destruct;
- (id)backButtonImage;

@end
