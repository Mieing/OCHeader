@class NSString, UIView;

@interface IESLiveChatChannelMemberActionSheet : UIView <IESLiveAutoRotateAction>

@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) UIView *menus;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) UIView *accessView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)dismissWithAnimation;
- (void)p_doNothing;
- (void)appearAnimation;
- (void)setupGes;
- (id)initWithMenus:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)setupAccessibility;

@end
