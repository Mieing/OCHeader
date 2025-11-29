@class UIColor, NSString, UIStackView, DUXPopoverUIConfigModel, UIView, NSArray;
@protocol IESIMPopoverDelegate, DUXActionPopoverDelegate, IESIMPopoverPositionOffsetProtocol, IESIMActionPopoverDelegate, IESIMPopoverCoverViewProtocol, IESIMPopoverContent;

@interface DUXActionPopover : DUXPopover <IESIMActionPopoverProtocol, DUXActionPopoverActionViewDelegate>

@property (weak, nonatomic) id<IESIMActionPopoverDelegate, IESIMPopoverDelegate> iesimDelegate;
@property (nonatomic) double actionWidth;
@property (retain, nonatomic) id<IESIMPopoverContent> content;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (retain, nonatomic) UIView *target;
@property (nonatomic) unsigned long long iesimPosition;
@property (nonatomic) BOOL needHollow;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetPoint;
@property (nonatomic) double targetPadding;
@property (nonatomic) BOOL autoAdaption;
@property (retain, nonatomic) UIView *limitView;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ hideCompletion;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (retain, nonatomic) id<IESIMPopoverPositionOffsetProtocol> positionOffset;
@property (nonatomic) double limitPadding;
@property (nonatomic) BOOL makeConstraintsWithTarget;
@property (nonatomic) BOOL shouldAutoTimerCountInScrollProcess;
@property (retain, nonatomic) UIView<IESIMPopoverCoverViewProtocol> *coverView;
@property (nonatomic) BOOL tapToDismiss;
@property (nonatomic) BOOL disableHighlightWhileTapPlaceholder;
@property (retain, nonatomic) UIColor *popoverColor;
@property (nonatomic) unsigned long long backgroundStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *stackBackgroundView;
@property (retain, nonatomic) DUXPopoverUIConfigModel *uiConfig;
@property (nonatomic) BOOL needRefresh;
@property (copy, nonatomic) NSArray *actions;
@property (weak, nonatomic) id<DUXActionPopoverDelegate> delegate;
@property (readonly, nonatomic) long long layoutDirection;
@property (nonatomic) double actionWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnlargeType:(unsigned long long)a0;
- (id)initWithActions:(id)a0 target:(id)a1;
- (void)showOnView:(id)a0 withCover:(BOOL)a1 withAnimated:(BOOL)a2;
- (id)initWithActions:(id)a0 target:(id)a1 layoutDirection:(long long)a2 enlargeType:(unsigned long long)a3;
- (id)popoverPressColor;
- (id)initWithActions:(id)a0 target:(id)a1 layoutDirection:(long long)a2;
- (void)refreshWithActions:(id)a0;
- (void)didSelectActionPopoverActionView:(id)a0;
- (void)setupActionPopover;
- (void).cxx_destruct;
- (void)dismissPopover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
