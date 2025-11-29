@class UIImageView, DVEVideoTransitionModel;

@interface DVEVideoTransitionItem : DVEButton

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) DVEVideoTransitionModel *model;

- (id)initWithModel:(id)a0 withAccessibilityLabel:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
