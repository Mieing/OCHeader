@class WCFinderLoadingTipsConfigration, WCFinderDataLoadTips, NSString;
@protocol UIContentConfiguration;

@interface WCFinderLoadingTipsContentView : UIView <WCFinderDataLoadTipsDelegate, UIContentView>

@property (retain, nonatomic) WCFinderLoadingTipsConfigration *appliedConfiguration;
@property (retain, nonatomic) WCFinderDataLoadTips *loadingTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;

- (id)initWithConfigration:(id)a0;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)a0;
- (void)onDataLoadTipsClickRetry;
- (void).cxx_destruct;

@end
