@class NSString, UIImageView, UILabel, UIView, WCFinderNativeDramaDetailEpisodeConfiguration;
@protocol UIContentConfiguration;

@interface WCFinderNativeDramaDetailEpisodeConfigurationView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderNativeDramaDetailEpisodeConfiguration *appliedConfiguration;
@property (retain, nonatomic) UILabel *episodeIndexLabel;
@property (retain, nonatomic) UIView *lockBackgroundView;
@property (retain, nonatomic) UIImageView *lockImageView;
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
- (void)_updateStatusCanPlay;
- (void)_updateStatusLocked;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
