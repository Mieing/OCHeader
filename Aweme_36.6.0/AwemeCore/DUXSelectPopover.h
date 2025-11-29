@class UIColor, NSString, UIStackView, DUXPopoverUIConfigModel, UIView, NSArray;
@protocol IESIMPopoverDelegate, DUXSelectPopoverDelegate, IESIMPopoverPositionOffsetProtocol, IESIMPopoverCoverViewProtocol, IESIMSelectPopoverDelegate, IESIMPopoverContent;

@interface DUXSelectPopover : DUXPopover <IESIMSelectPopoverProtocol, DUXSelectPopoverOptionViewDelegate>

@property (weak, nonatomic) id<IESIMSelectPopoverDelegate, IESIMPopoverDelegate> iesimDelegate;
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
@property (nonatomic) long long type;
@property (retain, nonatomic) DUXPopoverUIConfigModel *uiConfig;
@property (copy, nonatomic) NSArray *options;
@property (weak, nonatomic) id<DUXSelectPopoverDelegate> delegate;
@property (nonatomic) double actionWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnlargeType:(unsigned long long)a0;
- (id)initWithOptions:(id)a0 type:(long long)a1 target:(id)a2;
- (void)showOnView:(id)a0 withCover:(BOOL)a1 withAnimated:(BOOL)a2;
- (id)initWithOptions:(id)a0 type:(long long)a1 target:(id)a2 enlargeType:(unsigned long long)a3;
- (id)popoverPressColor;
- (void)didClickSelectPopoverOptionView:(id)a0;
- (void)setupSelectPopover;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
