@class WCAdDynamicFeedElementPromotionInfo;

@interface WCAdDynamicCountdownView : WCAdCountdownView

@property (retain, nonatomic) WCAdDynamicFeedElementPromotionInfo *styleInfo;

- (id)initWithTitle:(id)a0 endTime:(long long)a1 maxWidth:(double)a2 styleInfo:(id)a3;
- (void)updateDynamicStyle;
- (void)setDynamicMaxWidth:(double)a0;
- (void).cxx_destruct;

@end
