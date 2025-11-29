@class UIColor, NSDictionary, AWEAwemeModel, UIView;
@protocol AWEInteractionElementPopoverDataProtocol, AWEInteractionElementPopoverBGViewProtocol, AWEInteractionElementPopoverDataElementAnimatorProtocol;

@interface AWEInteractionElementPopoverContext : AWEPageContext <AWEInteractionElementPopoverContextProtocol> {
    void /* function */ contextDict;
    void /* function */ container;
}

@property (nonatomic) BOOL disableLongPressGesture;
@property (nonatomic) BOOL disableAnimationForSingleData;
@property (nonatomic, copy) NSDictionary *contextDict;
@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, retain) id<AWEInteractionElementPopoverBGViewProtocol> bgView;
@property (nonatomic, retain) id<AWEInteractionElementPopoverDataProtocol> data;
@property (nonatomic, retain) id<AWEInteractionElementPopoverDataElementAnimatorProtocol> dataElementAnimator;
@property (nonatomic) double autoDismissTime;
@property (nonatomic, retain) UIView *target;
@property (nonatomic, retain) UIView *endTarget;
@property (nonatomic) unsigned long long position;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetPoint;
@property (nonatomic) double targetPadding;
@property (nonatomic) BOOL needTargetViewSnapshot;
@property (nonatomic) BOOL needShowInCenterX;
@property (nonatomic) BOOL needMoveToBottom;
@property (nonatomic, retain) UIColor *coverViewColor;
@property (nonatomic, copy) id container;

- (void).cxx_destruct;
- (id)init;

@end
