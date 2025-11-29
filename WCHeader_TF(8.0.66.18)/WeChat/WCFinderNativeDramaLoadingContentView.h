@class WCFinderDataLoadTips, WCFinderNativeDramaLoadingConfiguration, NSString;
@protocol UIContentConfiguration;

@interface WCFinderNativeDramaLoadingContentView : UIView <UIContentView, WCFinderDataLoadTipsDelegate>

@property (retain, nonatomic) WCFinderNativeDramaLoadingConfiguration *appliedConfiguration;
@property (retain, nonatomic) WCFinderDataLoadTips *loadingView;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void)_applyConfiguration:(id)a0;
- (void)_setupUI;
- (void)_updateUI;
- (void)layoutSubviews;
- (void)onDataLoadTipsClickRetry;
- (void).cxx_destruct;

@end
