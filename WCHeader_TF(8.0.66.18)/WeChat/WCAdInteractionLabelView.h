@class WCDataItem, NSString, PAGView, WCAdInteractionLabelLogic, UILabel, WCAdInteractionLabelInfo, WCAdInteractionRollingLabelView;

@interface WCAdInteractionLabelView : UIView <WCAdInteractionLabelLogicDelegate>

@property (retain, nonatomic) WCAdInteractionLabelInfo *labelInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdInteractionLabelLogic *labelLogic;
@property (retain, nonatomic) PAGView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCAdInteractionRollingLabelView *rollingLabelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcViewSizeForLabelInfo:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelInfo:(id)a1 dataItem:(id)a2 scene:(unsigned long long)a3;
- (void)generateViews;
- (void)layoutSubviews;
- (id)fetchThemeColor;
- (void)onInteractionLabelLogicSwitchToIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)onInteractionLabelLogicSetIconPlaying:(BOOL)a0 reset:(BOOL)a1;
- (void).cxx_destruct;

@end
