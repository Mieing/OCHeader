@class UIImageView, UILabel, UIButton;
@protocol ACCEditCustomizeTagsEmptyViewDelegate;

@interface ACCEditCustomizeTagsEmptyView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (weak, nonatomic) id<ACCEditCustomizeTagsEmptyViewDelegate> delegate;

+ (id)generateNewTagActionButtonWithHeight:(double)a0;

- (void)handleTapOnActionButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
