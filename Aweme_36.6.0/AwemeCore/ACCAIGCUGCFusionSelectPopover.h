@class UIStackView, NSArray, NSString, UIView, NSMutableArray;

@interface ACCAIGCUGCFusionSelectPopover : DUXPopover <ACCAIGCUGCFusionSelectPopoverOptionViewDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *stackBackgroundView;
@property (nonatomic) double actionWidth;
@property (retain, nonatomic) NSMutableArray *optionViews;
@property (copy, nonatomic) NSArray *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onThemeChanged;
- (void)showOnView:(id)a0 withCover:(BOOL)a1 withAnimated:(BOOL)a2;
- (id)popoverPressColor;
- (void)bindService;
- (id)initWithOptions:(id)a0 target:(id)a1;
- (void)didClickSelectPopoverOptionView:(id)a0;
- (void)setupSelectPopover;
- (void).cxx_destruct;

@end
