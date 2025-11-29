@class WCFinderNoMoreView, NSString, UILabel, WCFinderFooterConfiguration;
@protocol UIContentConfiguration;

@interface WCFinderFooterContentView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderFooterConfiguration *appliedConfiguration;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) WCFinderNoMoreView *noMoreView;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfiguration:(id)a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)a0;
- (void).cxx_destruct;

@end
