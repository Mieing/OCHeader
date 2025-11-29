@class UIButton, NSString, WCFinderSmartCollectionTipsConfiguration;
@protocol UIContentConfiguration;

@interface WCFinderSmartCollectionTipsContentView : UIView <UIContentView>

@property (retain, nonatomic) WCFinderSmartCollectionTipsConfiguration *appliedConfiguration;
@property (retain, nonatomic) UIButton *episodeBtn;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTipsStr;
+ (struct CGSize { double x0; double x1; })getTipsSize:(double)a0;
+ (double)itemHeightWithLayoutEnvironment:(id)a0 context:(id)a1;

- (id)initWithConfiguration:(id)a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)clickModFeedButtonAction:(id)a0;
- (void).cxx_destruct;

@end
