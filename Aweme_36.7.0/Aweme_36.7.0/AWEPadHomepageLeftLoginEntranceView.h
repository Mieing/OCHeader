@class UILabel, NSString, UIView;

@interface AWEPadHomepageLeftLoginEntranceView : UIView <AWEHomepageLeftLoginEntranceViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)topCTAFloat:(double)a0;
- (id)initWithEntranceStyle:(long long)a0 themeType:(long long)a1;
- (void)setupViewWithStyle:(long long)a0 themeType:(long long)a1;
- (void)preferLightEntranceTheme;
- (void)preferDarkEntranceTheme;
- (void).cxx_destruct;

@end
