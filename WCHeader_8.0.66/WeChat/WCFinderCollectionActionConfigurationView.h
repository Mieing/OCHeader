@class WCFinderCollectionActionConfiguration, UIButton, NSString;
@protocol UIContentConfiguration;

@interface WCFinderCollectionActionConfigurationView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderCollectionActionConfiguration *appliedConfiguration;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIButton *favoritesButton;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void)_applyConfiguration:(id)a0;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)_didTapShareButton;
- (void)_didTapFavoritesButton;
- (void)_setupReport;
- (void)_configButtonReport:(id)a0 viewID:(id)a1;
- (void)_configFavoritesButtonReport;
- (id)_getNewActionButtonWithTitle:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
