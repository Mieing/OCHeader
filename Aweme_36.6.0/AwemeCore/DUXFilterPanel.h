@class UIStackView, NSString, NSArray, DUXButton, UIScrollView, DUXDivider;

@interface DUXFilterPanel : UIView

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) DUXButton *secondaryButton;
@property (retain, nonatomic) UIScrollView *filterScrollView;
@property (retain, nonatomic) DUXDivider *topDivider;
@property (retain, nonatomic) DUXDivider *filterDivider;
@property (copy, nonatomic) NSString *confirmTitle;
@property (nonatomic) long long selectedCount;
@property (nonatomic) double maxScale;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) double filterItemPadding;
@property (copy, nonatomic) NSArray *prefixItemStatus;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ secondaryAction;
@property (nonatomic) BOOL showSelectedCount;
@property (nonatomic) BOOL showUnselectedCount;
@property (nonatomic) BOOL enableUnselectedConfirm;
@property (nonatomic) double buttonVerticalPadding;
@property (nonatomic) unsigned long long enlargeType;

- (void)didClickConfirmButton;
- (void)updateFrameIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (void)updateSelectedCount;
- (void)restoreItemStatus;
- (void)didClickSecondaryButton;
- (void)setSecondaryButtonTitle:(id)a0 withButtonAction:(id /* block */)a1;
- (void)selectAllOptions:(BOOL)a0;
- (void)showDividerOnButtonTop:(BOOL)a0;
- (void)showDividerOnTitleTop:(BOOL)a0;
- (void)showSecondaryButton:(BOOL)a0;
- (void)showConfirmButton:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)recoveryOptions;

@end
