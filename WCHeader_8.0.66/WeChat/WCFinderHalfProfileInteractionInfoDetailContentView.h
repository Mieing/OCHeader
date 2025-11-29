@class WCFinderHalfProfileInteractionInfoDetailConfiguration, NSString, UIView, WCFinderRichTextView;
@protocol UIContentConfiguration;

@interface WCFinderHalfProfileInteractionInfoDetailContentView : UIView <UIContentView>

@property (copy, nonatomic) WCFinderHalfProfileInteractionInfoDetailConfiguration *appliedConfiguration;
@property (retain, nonatomic) WCFinderRichTextView *describeContentLabel;
@property (retain, nonatomic) UIView *describeContentGestureView;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithConfiguration:(id)a0 layoutEnvironment:(id)a1;
+ (id)_getRichTextView;

- (id)initWithConfiguration:(id)a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)a0;
- (void)_updateUI;
- (void)didTapLabel;
- (void).cxx_destruct;

@end
