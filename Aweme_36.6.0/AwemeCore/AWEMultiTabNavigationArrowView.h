@class UIImageView, NSString;

@interface AWEMultiTabNavigationArrowView : UIView <AWEFeedThemeManagerProtocol>

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)themeDidChange:(long long)a0;
- (void)buildUI;
- (double)tabFloat:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
