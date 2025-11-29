@class NSString, UIView;

@interface ACCRecordLayoutGuide : NSObject <ACCRecordLayoutGuideProtocol>

@property (weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)recordButtonBottomOffset;
- (double)recordButtonWidth;
- (double)recordButtonCenterY;
- (double)recordButtonHeight;
- (double)recordButtonSwitchViewBottomOffset;
- (double)recordButtonSwitchViewHeight;
- (double)deleteButtonWidth;
- (double)completeButtonWidth;
- (double)speedControlHeight;
- (double)speedControlRecordBottomSpace;
- (double)recordButtonSwitchViewCenterY;
- (double)sideButtonHeight;
- (double)sideButtonWidth;
- (double)bottomCircleButtonHeight;
- (double)bottomCircleButtonWidth;
- (double)sideCircleButtonHeight;
- (double)sideCircleButtonWidth;
- (double)bottomSideButtonMargin;
- (double)bottomSideButtonCenterXOffset;
- (double)bottomSideButtonSwitchViewSpace;
- (double)sideButtonCenterXOffset;
- (double)sideButtonLabelSpace;
- (double)deleteButtonHeight;
- (double)bottomDeleteButtonHeight;
- (double)bottomDeleteButtonIconHeight;
- (double)bottomDeleteButtonIconWidth;
- (double)bottomDeleteButtonIconTitleSpace;
- (double)completeButtonHeight;
- (double)recordFlowControlEvenSpace;
- (double)propPanelHeight;
- (double)speedControlMargin;
- (double)speedControlTop;
- (double)propBubbleHeight;
- (double)propBubbleWidth;
- (double)propTrayViewMargin;
- (double)propTrayViewHeight;
- (double)commerceEnterViewHeight;
- (double)commerceEnterViewBottomSpace;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestEdgeInsets;
- (double)containerHeight;
- (double)containerWidth;

@end
