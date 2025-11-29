@class NSArray, DUXPopover, NSString, UIView;

@interface AWELongPressPanelSpeedViewModel : AWELongPressPanelBaseViewModel <AWELongPressPanelSegmentViewDelegate, AWEModernLongPressSpeedSelectActionViewDelegate>

@property (copy, nonatomic) NSArray *newSpeedValueItem;
@property (weak, nonatomic) DUXPopover *speedSelectPopover;
@property (weak, nonatomic) UIView *speedSelectPopoverCoverView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowSpeedControlWithAwemeModel:(id)a0 referString:(id)a1;
+ (BOOL)shouldAdsInheritSpeedWithAwemeModel:(id)a0 referString:(id)a1;
+ (BOOL)shouldUseSystemOrigin;
+ (BOOL)isFromSearchWithReferString:(id)a0;
+ (id)longPressPanelViewModel;

- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)handlePanelDidDismiss:(id)a0;
- (BOOL)needShowForScene:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })subViewSize;
- (BOOL)longPressPanelSegmentViewCanClick:(id)a0 index:(long long)a1;
- (void)longPressPanelSegmentViewDidClick:(id)a0 index:(long long)a1;
- (struct CGSize { double x0; double x1; })longPressPanelSegmentAnimationViewSize:(id)a0;
- (BOOL)useContext;
- (id)speedItem;
- (double)emptyBackgroundLeftSpacing;
- (double)emptyBackgroundRightSpacing;
- (BOOL)newSpeedOptimizeEnable;
- (id)newSpeedValueArray;
- (void)showSpeedSelectActionViewWithIndex:(long long)a0;
- (void)speedChangeToastShow:(long long)a0;
- (void)traceSpeedValueSelected:(id)a0;
- (BOOL)shouldReplaceSpeedStyle;
- (void)hideSpeedSelectPopover;
- (double)longPressPanelSegmentTitleLabelFontSize:(id)a0;
- (void)modernLongPressSpeedSelectActionViewWithIndex:(long long)a0;
- (id)describeString;
- (BOOL)needShow;
- (void)speedControlModelClick:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
