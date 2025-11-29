@class WCFinderNativeDramaHalfScreenHeaderConfiguration, UIImageView, NSString, UILabel;
@protocol UIContentConfiguration;

@interface WCFinderNativeDramaHalfScreenHeaderConfigurationView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderNativeDramaHalfScreenHeaderConfiguration *appliedConfiguration;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *moreButton;
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
- (void)_onTapMoreButton;
- (void).cxx_destruct;

@end
