@class NSString, DUXBadgeViewConfig, UILabel, CALayer;
@protocol IESIMBadgeViewConfigProtocol;

@interface DUXBadge : UIView <IESIMBadgeProtocol>

@property (nonatomic) unsigned long long badgeNumber;
@property (copy, nonatomic) NSString *badgeText;
@property (readonly, nonatomic) id<IESIMBadgeViewConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGPoint { double x0; double x1; } centerPoint;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) DUXBadgeViewConfig *config;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CALayer *edgeLayer;
@property (nonatomic) unsigned long long badgeNumber;
@property (copy, nonatomic) NSString *badgeText;

- (id)initWithBadgeStyle:(unsigned long long)a0;
- (id)initWithBadgeStyle:(unsigned long long)a0 withConfig:(id)a1;
- (id)initWithStandardBadgeStyle:(unsigned long long)a0;
- (id)badgeContent;
- (void)updateSceneStyle:(unsigned long long)a0 withAnimate:(BOOL)a1;
- (void)setBadgeNumber:(unsigned long long)a0 withMaxBadgeNumber:(unsigned long long)a1;
- (id)initWithStandardBadgeStyle:(unsigned long long)a0 enlargeType:(unsigned long long)a1;
- (void)resetUI_DotStyle;
- (void)resetUI_LabelStyle;
- (void)newDUXBadgeSetCorner;
- (void)oldDUXBadgeSetCorner;
- (void)updateFrameWithCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_content;
- (void)updateFrame;
- (struct CGSize { double x0; double x1; })_badgeSize;
- (void)resetUI;

@end
