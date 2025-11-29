@class UIImageView, AWEHPBottomTabIconSpecialEntryModel, NSString;

@interface AWEHPTabBarButtonItemComponentIconContent : UIView <AWEHPTabBarButtonItemComponentContentProtocol>

@property (retain, nonatomic) AWEHPBottomTabIconSpecialEntryModel *styleModel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchToLightModeWithProgress:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonContentRectInWindow;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
