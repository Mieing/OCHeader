@class UILabel, UIButton;
@protocol ACCEditTagsSearchEmptyViewDelegate;

@interface ACCEditTagsSearchEmptyView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (weak, nonatomic) id<ACCEditTagsSearchEmptyViewDelegate> delegate;
@property (retain, nonatomic) UIButton *actionButton;

- (void)handleTapOnActionButton;
- (void)handleTapOnEmptyView;
- (void)updateWithText:(id)a0 actionButtonText:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
