@class UIColor, NSString, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEInteractionElementPopoverDataProtocol, AWEInteractionElementPopoverBGViewProtocol, AWEInteractionElementPopoverDataElementAnimatorProtocol;

@interface AWEInteractionShareElementPopoverContext : NSObject <AWEInteractionElementPopoverContextProtocol>

@property (retain, nonatomic) id<AWEInteractionElementPopoverBGViewProtocol> bgView;
@property (retain, nonatomic) id<AWEInteractionElementPopoverDataProtocol> data;
@property (retain, nonatomic) id<AWEInteractionElementPopoverDataElementAnimatorProtocol> dataElementAnimator;
@property (nonatomic) double autoDismissTime;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) unsigned long long position;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) double targetPadding;
@property (nonatomic) BOOL disableAnimationForSingleData;
@property (nonatomic) BOOL needTargetViewSnapshot;
@property (nonatomic) BOOL disableLongPressGesture;
@property (retain, nonatomic) UIColor *coverViewColor;
@property (retain, nonatomic) UIView *endTarget;
@property (nonatomic) BOOL needShowInCenterX;
@property (nonatomic) BOOL needMoveToBottom;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (retain, nonatomic) id container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
